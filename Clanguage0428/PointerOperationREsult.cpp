/*
#include<stdio.h> // 표준 입출력 함수 사용을 위해 포함

int main(void)
{
    // int형 포인터 ptr1에 0x0010 주소를 타입 캐스팅해서 대입
    int* ptr1 = (int*)0x0010;

    // double형 포인터 ptr2에 0x0010 주소를 타입 캐스팅해서 대입
    double* ptr2 = (double*)0x0010;

    // ptr1은 int* 이므로, ptr1 + 1은 (0x0010 + sizeof(int)) 즉 0x0014
    // ptr1 + 2는 (0x0010 + 2 * sizeof(int)) 즉 0x0018
    printf("%p %p \n", ptr1 + 1, ptr1 + 2); // int는 4바이트라 4, 8바이트씩 증가함

    // ptr2는 double* 이므로, ptr2 + 1은 (0x0010 + sizeof(double)) 즉 0x0018
    // ptr2 + 2는 (0x0010 + 2 * sizeof(double)) 즉 0x0020
    printf("%p %p \n", ptr2 + 1, ptr2 + 2); // double은 8바이트라 8, 16바이트씩 증가함

    // 현재 포인터들의 값을 출력 (아직 증가는 안 시킨 상태)
    printf("%p %p \n", ptr1, ptr2);

    // 포인터를 하나씩 증가시킨다.
    // ptr1++ 은 ptr1 = ptr1 + 1 과 같음 -> 4바이트 증가
    ptr1++;

    // ptr2++ 은 ptr2 = ptr2 + 1 과 같음 -> 8바이트 증가
    ptr2++;

    // 증가된 포인터들의 값을 출력
    printf("%p %p \n", ptr1, ptr2);

    return 0; // 프로그램 정상 종료
}

*/