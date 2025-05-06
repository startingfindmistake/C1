#include<stdio.h>
#include<stdbool.h> // bool 타입과 true/false 사용을 위해 포함


//소수인지 판별하는 함수
bool is_prime(int num) {
    if (num < 2) return false;  // 2보다 작은 수는 소수가 아님
    for(int i = 2; i * i <= num; i++) { //2부터 sqrt(num)까지 나눠봄
        if (num % i == 0) return false; // 나누어 떨어지면 소수가 아님
    }
    return true;    //위 조건을 통과하면 소수임
}

int main(void) {
    int count = 0;      //찾은 소수의 개수를 세기 위한 변수
    int num = 2;        // 소수 판별을 시작할 숫자(소수는 2부터 시작)

    // 소수 10개를 찾을 때까지 반복
    while(count < 10) {
        if (is_prime(num)) {        // 현재 숫자가 소수이면
            printf("%d ", num);     //출력하고
            count++;                //소수 개수 증가
        }
        num++;  // 다음 숫자로 넘어감
    }

    printf("\n");   // 출력 끝난 후 줄바꿈
    return 0;       // 프로그램 종류
}