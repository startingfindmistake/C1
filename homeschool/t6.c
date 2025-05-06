
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int total_seconds;      // 사용자로부터 입력받을 전체 초를 저장하는 변수
    int hours, minutes, seconds;    //각각 시, 분, 초로 변환한 값을 저장할 변수


    printf("초(second) 입력: ");    //사용자로 부터 초를 입력받음
    scanf("%d", &total_seconds);     //입력된 초를 total_seconds 변수에 저장

    // 총 초를 시(hour)로 변환: 1시간은 3600초이므로
    hours = total_seconds / 3600;

    // 남은 초에서 분(minute) 계산: 전체 초에서 시간 부분을 뺀 후 60으로 나눔
    minutes = (total_seconds % 3600) / 60;

    // 최종적으로 남은 초(second): 60으로 나누고 남은 값
    seconds = total_seconds % 60;

    //결과 출력 시, 분, 초 형식
    printf("[h:%d], m:%d, s:%d", hours, minutes, seconds);

    return 0;   //프로그램 종료
}