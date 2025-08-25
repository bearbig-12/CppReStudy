#include <iostream>

const char gStageData[] = "\
	########\n\
	# ..p  #\n\
	# oo   #\n\
	#      #\n\
	########";

const int gStageWidth = 8;
const int gStageHeight = 5;

enum Object {
	OBJ_SPACE,
	OBJ_WALL,
	OBJ_GOAL,
	OBJ_BLOCK,
	OBJ_BLOCK_ON_GOAL,
	OBJ_MAN,
	OBJ_MAN_ON_GOAL,

	OBJ_UNKNOWN
};

void Initalize(Object* state, const int w, const int h, const char* stageData);
void Draw(const Object* state, int w, int h);
bool CheckClear(const Object* state, int w, int h);
void Update(Object* state, char input, int w, int h);


int main()
{
	Object* State = new Object[gStageWidth * gStageHeight];
	Initalize(State, gStageWidth, gStageHeight, gStageData);

	while (true)
	{
		Draw(State, gStageWidth, gStageHeight);
		if (CheckClear(State, gStageWidth, gStageHeight))
		{
			std::cout << "Well Done !" << std::endl;
			break;
		}
		std::cout << "a : Left, d : Right, w : Up, s : Down. Command?" << std::endl;
		char input;
		std::cin >> input;

		Update(State, input, gStageWidth, gStageHeight);
	}

}


void Initalize(Object* state, const int w, const int h, const char* stageData)
{
	const char* stage = stageData;

	int x{ 0 };
	int y{ 0 };

	while (*stage != '\0')
	{
		Object t;
		switch (*stage)
		{
		case'#':
		{
			t = OBJ_WALL;
			break;
		}
		case' ':
		{
			t = OBJ_SPACE;
			break;
		}
		case'.':
		{
			t = OBJ_GOAL;
			break;
		}
		case 'o':
		{
			t = OBJ_BLOCK;
			break;
		}
		case 'O':
		{
			t = OBJ_BLOCK_ON_GOAL;
			break;
		}
		case 'p':
		{
			t = OBJ_MAN;
			break;
		}
		case 'P':
		{
			t = OBJ_MAN_ON_GOAL;
			break;
		}
		case '\n':
		{
			t = OBJ_UNKNOWN;
			x = 0;
			++y;
			break;

		}
		default:
			t = OBJ_UNKNOWN;
			break;
		}
		++stage;
		if (t != OBJ_UNKNOWN)
		{
			state[y * w + x] = t;
			++x;
		}
	}

	
}

bool CheckClear(const Object* state, int w, int h)
{
	for (int i = 0; i < w * h; ++i)
	{
		if (state[i] == OBJ_BLOCK)
		{
			return false;
		}
	}
	return true;
}


void Draw(const Object* state, int w, int h)
{
	const char font[]{ ' ', '#', '.', 'o', 'O','p','P', };
	for (int y = 0; y < h; ++y)
	{
		for (int x = 0; x < w; ++x)
		{
			Object o = state[y * w + x];
			std::cout << font[o];
		}
		std::cout << '\n';
	}
}

void Update( Object* state, char input, int w, int h)
{
	// 이동값
	int dx = 0;
	int dy = 0;

	switch (input)
	{
	case 'w':
	{
		dy = -1;
		break;
	}
	case 's':
	{
		dy = 1;
		break;
	}
	case 'a':
	{
		dx = -1;
		break;
	}
	case 'd':
	{
		dx = 1;
		break;
	}
	}

	// 현재 player 위치 인덱스
	int i;
	for (i = 0; i < w * h; ++i)
	{
		if (state[i] == OBJ_MAN || state[i] == OBJ_MAN_ON_GOAL)
		{
			break;
		}
	}
	// 현재 player 위치
	int x = i % w;
	int y = i / w;

	// 이동할 위치
	int tx = x + dx;
	int ty = y + dy;

	if (tx < 0 || ty < 0 || tx >= w || ty >= h)
	{
		return;
	}

	int p = y * w + x;		// 현재 위치 인덱스
	int tp = ty * w + tx;	// 이동할 위치 인덱스
	// 플레이어 이동
	if (state[tp] == OBJ_SPACE || state[tp] == OBJ_GOAL)
	{
		if (state[p] == OBJ_MAN_ON_GOAL)
		{
			state[p] = OBJ_GOAL; // 원래 골 위에 있던 플레이어가 이동 = 그냥 골로 변경
		}
		else
		{
			state[p] = OBJ_SPACE; // 플레이어가 있던 자리는 빈칸으로
		}

		if (state[tp] == OBJ_GOAL)
		{
			state[tp] = OBJ_MAN_ON_GOAL;	// 플레이어가 갈 자리가 GOAL 이면 
		}
		else
		{
			state[tp] = OBJ_MAN; // 빈칸일 경우 빈칸을 플레이어로
		}
	}
	// 상자 이동
	else if (state[tp] == OBJ_BLOCK || state[tp] == OBJ_BLOCK_ON_GOAL)
	{
		// 플레이어가 상자를 밀 경우, 상자는 플레이어보다 한칸 더 앞으로 가야한다.
		// 상자가 밀려날 위치 = 플레이어가 이동할 위치 + 이동값
		int tx2 = tx + dx;
		int ty2 = ty + dy;

		if (tx2 < 0 || ty2 < 0 || tx2 >= w || ty2 >= h)
		{
			return;
		}

		int tp2 = ty2 * w + tx2;

		// 상자 이동
		if (state[tp2] == OBJ_GOAL)
		{
			state[tp2] = OBJ_BLOCK_ON_GOAL;	// 골 위로 상자 이동
		}
		else
		{
			state[tp2] = OBJ_BLOCK;	// 빈칸으로 이동
		}

		// 상자를 민 플레이어 이동
		if (state[tp] == OBJ_BLOCK_ON_GOAL)
		{
			state[tp] = OBJ_MAN_ON_GOAL; // 골 위에 있던 박스를 밀고, 플레이어가 골 위로
		}
		else
		{
			state[tp] = OBJ_MAN; // 상자 자리로 플레이어 이동
		}

		// 플레이어가 원래 있던 자리
		if (state[p] == OBJ_MAN_ON_GOAL)
		{
			state[p] = OBJ_GOAL;
		}
		else
		{
			state[p] = OBJ_SPACE;
		}
	}

}

