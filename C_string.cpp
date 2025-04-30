#define _CRT_SECURE_NO_WARNINGS  // C4996 경고 무시
#include<stdio.h>
#include<stdlib.h>

/*
malloc, calloc, realloc, free	동적 메모리 할당 및 해제
atoi, atof, atol	문자열을 정수나 실수로 변환
rand, srand	난수 생성
exit, abort	프로그램 종료
system	셸 명령어 실행 (보안상 주의 필요)
qsort, bsearch	퀵 정렬과 이진 탐색
*/

#include<string.h>
/*
strlen(s)	문자열 길이 반환 (널 문자 \0 제외)
strcpy(dest, src)	문자열 복사 (src → dest)
strncpy(dest, src, n)	최대 n자까지 복사
strcmp(s1, s2)	두 문자열 비교 (== 대신 사용)
strncmp(s1, s2, n)	앞 n자까지만 비교
strcat(dest, src)	문자열 이어붙이기
strncat(dest, src, n)	최대 n자까지 이어붙이기
strchr(s, c)	문자열에서 문자 c 첫 위치 반환
strstr(haystack, needle)	부분 문자열 찾기
*/

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];

	printf("첫번째 문자열 입력");
	fgets(str1, sizeof(str1), stdin);		//입력받은 문자열 저장 버퍼, 읽을 최대 문자 수, 입력 스트림
	str1[strlen(str1) - 1] = 0;			// \n 문자의 삭제

	printf("두번째 문자열 입력");
	fgets(str2, sizeof(str2), stdin);		//입력받은 문자열 저장 버퍼, 읽을 최대 문자 수, 입력 스트림
	str2[strlen(str2) - 1] = 0;			// \n 문자의 삭제

	strcpy(str3, str1);				//문자열 복사 str1->str3로 복사
	strcat(str3, str2);				//str3, str2 문자열 이어붙이기
	printf("조합의 결과: %s \n", str3);
	return 0;

}