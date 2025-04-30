#define _CRT_SECURE_NO_WARNINGS  // C4996 경고 무시
#include<stdio.h>
/*
int main(int argc, char *argv[])
{
	int i;
	float f;
	char c, str[32];

	scanf("%d, &i");		printf("1:%d\n", i);		//정수의 입력
	scanf("%f, &f");		printf("2:%f\n", f);		//실수의 입력
	scanf("%c, &c");		printf("3:%c\n", c);		//문자의 입력
	scanf("%s, &str");		printf("4:%s\n", str);		//문자열의 입력

}
*/

#define _CRT_SECURE_NO_WARNINGS  // Visual Studio의 C4996 경고 제거
#include <stdio.h>

int main(int argc, char* argv[])
{
    int i;
    float f;
    char c;
    char str[32];

    // 정수 입력
    printf("정수를 입력하세요: ");
    scanf("%d", &i);
    printf("1: %d\n", i);

    // 실수 입력
    printf("실수를 입력하세요: ");
    scanf("%f", &f);
    printf("2: %.2f\n", f);  // 실수는 %f로 출력

    // 문자 입력 (앞의 개행 처리 필요)
    getchar();  // 이전 입력에서 남은 개행 제거
    printf("문자 한 개를 입력하세요: ");
    scanf("%c", &c);
    printf("3: %c\n", c);

    // 문자열 입력
    printf("문자열을 입력하세요: ");
    scanf("%s", str);  // 문자열은 & 안 붙임
    printf("4: %s\n", str);

    return 0;
}
