/*
#include<stdio.h> // ǥ�� ����� �Լ� ����� ���� ����

int main(void)
{
    // int�� ������ ptr1�� 0x0010 �ּҸ� Ÿ�� ĳ�����ؼ� ����
    int* ptr1 = (int*)0x0010;

    // double�� ������ ptr2�� 0x0010 �ּҸ� Ÿ�� ĳ�����ؼ� ����
    double* ptr2 = (double*)0x0010;

    // ptr1�� int* �̹Ƿ�, ptr1 + 1�� (0x0010 + sizeof(int)) �� 0x0014
    // ptr1 + 2�� (0x0010 + 2 * sizeof(int)) �� 0x0018
    printf("%p %p \n", ptr1 + 1, ptr1 + 2); // int�� 4����Ʈ�� 4, 8����Ʈ�� ������

    // ptr2�� double* �̹Ƿ�, ptr2 + 1�� (0x0010 + sizeof(double)) �� 0x0018
    // ptr2 + 2�� (0x0010 + 2 * sizeof(double)) �� 0x0020
    printf("%p %p \n", ptr2 + 1, ptr2 + 2); // double�� 8����Ʈ�� 8, 16����Ʈ�� ������

    // ���� �����͵��� ���� ��� (���� ������ �� ��Ų ����)
    printf("%p %p \n", ptr1, ptr2);

    // �����͸� �ϳ��� ������Ų��.
    // ptr1++ �� ptr1 = ptr1 + 1 �� ���� -> 4����Ʈ ����
    ptr1++;

    // ptr2++ �� ptr2 = ptr2 + 1 �� ���� -> 8����Ʈ ����
    ptr2++;

    // ������ �����͵��� ���� ���
    printf("%p %p \n", ptr1, ptr2);

    return 0; // ���α׷� ���� ����
}

*/