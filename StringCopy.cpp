#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];
	
	strcpy(str2, str1);
	puts(str2);

	strncpy(str3, str1, sizeof(str3));		// 최대strncpy(str3, str1, sizeof(str3)); 복사
	puts(str3);

	strncpy(str3, str1, sizeof(str3) - 1);  // 최대sizeof(str3) - 1)까지 복사
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
	return 0;
}

