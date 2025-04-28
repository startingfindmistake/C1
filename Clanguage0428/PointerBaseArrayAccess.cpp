/*
#include<stdio.h> // 표준 입출력 함수 사용

int main(void)
{
    // int형 배열 arr를 선언하고 초기화 (크기 3, 값은 11, 22, 33)
    int arr[3] = { 11, 22, 33 };

    // int형 포인터 ptr을 선언하고 arr 배열의 첫 번째 요소의 주소를 가리키게 함
    // int *ptr = &arr[0]; 과 같은 의미
    int* ptr = arr;

    // ptr이 가리키는 값 (*ptr) 출력: arr[0] (11)
    // ptr+1이 가리키는 값 (*(ptr+1)) 출력: arr[1] (22)
    // ptr+2가 가리키는 값 (*(ptr+2)) 출력: arr[2] (33)
    printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

    // 현재 ptr은 arr[0]을 가리키고 있음
    printf("%d ", *ptr); // arr[0]의 값(11) 출력
    ptr++;               // ptr을 다음 요소(arr[1])로 이동 (4바이트 증가)

    printf("%d ", *ptr); // arr[1]의 값(22) 출력
    ptr++;               // ptr을 다시 다음 요소(arr[2])로 이동 (또 4바이트 증가)

    printf("%d ", *ptr); // arr[2]의 값(33) 출력
    ptr--;               // ptr을 이전 요소(arr[1])로 이동 (4바이트 감소)

    printf("%d ", *ptr); // arr[1]의 값(22) 출력
    ptr--;               // ptr을 다시 이전 요소(arr[0])로 이동 (또 4바이트 감소)

    printf("%d ", *ptr); // arr[0]의 값(11) 출력

    printf("\n"); // 줄바꿈

    return 0; // 프로그램 정상 종료
}
*/