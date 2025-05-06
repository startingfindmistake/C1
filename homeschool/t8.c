#include<stdio.h>

//재귀 함수를 정의: 2^n을 계산하는 함수
int powerOfTwo(int n) {
    //재귀 종류 조건: 2^0 = 1
    if (n == 0) {
        return 1;
    }

    //재귀 호출: 2^n = 2 * 2^(n-1)
    return 2 * powerOfTwo(n-1);
}

int main(void) {
    int n, result;

    //사용자로부터 정수 n 입력 받기
    printf("정수 입력: ");
    scanf("%d", &n);    

    //재귀함수를 호출하여 2^n 계산
    result = powerOfTwo(n);

    //결과 출력
    printf("2의 %d승은 %d\n", n, result);   //출력 2의 8승은 256

    return 0; //프로그램 종류
}