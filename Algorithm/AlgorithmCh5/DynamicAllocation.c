#include <stdio.h>
#include <stdlib.h>

// ����
// ������ġ, ���Ǵ� Ű���忡 ���� ������ ������ �ٸ��ϴ�.
// ���ӱⰣ, ���ٹ���
int global = 0;   // �ܺκ���, ��������

int GetScore(int value) {
    static int sum = 0;   // ���ú���, �ڵ�����-> ��������

    return sum;
}

int main() {
    int a = 20;   // ���ú���(��������), �ڵ�����

    {
        int b = 100;   // ���ú���, �ڵ�����
    }

    // �����޸� ����
    int count = 0;
    printf("�Է��Ͻ� ������ ������ �Է��ϼ���: ");
    scanf_s("%d", &count);

    printf("\nmalloc\n");
    int* parray = (int*)malloc(sizeof(int) * count);   // �����޸� �Ҵ�

    for (int i = 0; i < count; i++) {
        parray[i] = i;
    }

    for (int i = 0; i < count; i++) {
        printf("parray[%d] = %d\n", i, parray[i]);
    }

    free(parray);   // �����޸� ���� �ݳ�ó��

    // calloc �������� �Ҵ�� �޸� ������ 0���� �ʱ�ȭ
    // realloc�� �Ҵ� ���� ������ ���Ҵ��Ҷ� ���.
    printf("\ncalloc\n");
    float* pfarray = (float*)calloc(count, sizeof(float)); // ���� �޸� ������ �Ҵ�

    for (int i = 0; i < count; i++) {
        printf("pfarray[%d] = %f\n", i, pfarray[i]);
    }

    printf("\nrealloc\n");
    pfarray = (float*)realloc(pfarray, sizeof(float) * count * 2);   // �����޸� ���� ���Ҵ�

    for (int i = 0; i < count * 2; i++) {
        printf("pfarray[%d] = %f\n", i, pfarray[i]);
    }

    free(pfarray);   // �����޸� �ݳ�ó��


    return 0;
}