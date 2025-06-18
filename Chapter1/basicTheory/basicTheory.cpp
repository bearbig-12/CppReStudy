// chapter_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// 모든 프로그램은 main함수를 가지고 있고, 이 함수에서 시작한다.(Entry Point)
int main()
{
    std::cout << "Hello World!\n";
}

// 컴파일 과정
/*
    프로그램 실행을 위하여 user가 작성한 Source Code를 Object Code(목적코드)로 변환해야 한다.
    이러한 과정을 <컴파일/Compile> 이라고 하며 이러한 처리를 해주는 도구를 <컴파일러/Compiler> 라고한다.
    컴파일은 문법에 굉장히 민감하므로 주의해야 한다.
    잚못된 문법등으로 컴파일이 실패할 경우, 실패한 원인을
    <컴파일 타임 에러 / Compile Time Error>라고 한다.
*/

// 링크 과정
/*
    컴파일 과정에서 생긴 목적어들을 연결하여 실행파일을 만들어 주는 과정을 <링크/Link> 라고 한다.
    이러한 처리를 지원하는 도구를 <링커/Linker>라고 한다.
    위 예제에서 문자열을 cout에 넘겨주기만 하였지만 <iostream> 라이브러리를 표기하였으므로
    cout의 기능을 사용할 수 있음
    결론적으로 Hello World.obj와 iostream.obj를 링커가 연결하여 HelloWorld.exe(실행파일)를 생성함

    이러한 링크 과정에서 발생한 에러를 <링크 타임 에러 / link-time error >
    링크 과정 후, 생성된 실행 파일에서 에레가 발생하는 에러를
    <런타임 에러 / Run-time error>라고 부른다
*/

// 컴파일 에러, 링크타임 에러, 런타임 에러는 숙지해두는 것이 좋다.


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// 