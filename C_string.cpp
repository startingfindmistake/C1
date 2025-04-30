#define _CRT_SECURE_NO_WARNINGS  // C4996 ��� ����
#include<stdio.h>
#include<stdlib.h>

/*
malloc, calloc, realloc, free	���� �޸� �Ҵ� �� ����
atoi, atof, atol	���ڿ��� ������ �Ǽ��� ��ȯ
rand, srand	���� ����
exit, abort	���α׷� ����
system	�� ��ɾ� ���� (���Ȼ� ���� �ʿ�)
qsort, bsearch	�� ���İ� ���� Ž��
*/

#include<string.h>
/*
strlen(s)	���ڿ� ���� ��ȯ (�� ���� \0 ����)
strcpy(dest, src)	���ڿ� ���� (src �� dest)
strncpy(dest, src, n)	�ִ� n�ڱ��� ����
strcmp(s1, s2)	�� ���ڿ� �� (== ��� ���)
strncmp(s1, s2, n)	�� n�ڱ����� ��
strcat(dest, src)	���ڿ� �̾���̱�
strncat(dest, src, n)	�ִ� n�ڱ��� �̾���̱�
strchr(s, c)	���ڿ����� ���� c ù ��ġ ��ȯ
strstr(haystack, needle)	�κ� ���ڿ� ã��
*/

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];

	printf("ù��° ���ڿ� �Է�");
	fgets(str1, sizeof(str1), stdin);		//�Է¹��� ���ڿ� ���� ����, ���� �ִ� ���� ��, �Է� ��Ʈ��
	str1[strlen(str1) - 1] = 0;			// \n ������ ����

	printf("�ι�° ���ڿ� �Է�");
	fgets(str2, sizeof(str2), stdin);		//�Է¹��� ���ڿ� ���� ����, ���� �ִ� ���� ��, �Է� ��Ʈ��
	str2[strlen(str2) - 1] = 0;			// \n ������ ����

	strcpy(str3, str1);				//���ڿ� ���� str1->str3�� ����
	strcat(str3, str2);				//str3, str2 ���ڿ� �̾���̱�
	printf("������ ���: %s \n", str3);
	return 0;

}