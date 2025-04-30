#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int GetSpaceIdx(char str[])
{
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			return i;
	}
	return -1;		//���� ���ڰ� �������� �ʴ� ����� ��ȯ
}

int CompName(char str1[], char str2[])
{
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);

	if (idx1 != idx2)		// �̸��� ���̰� �ٸ��� ���� �ٸ� �̸�!
		return 0;
	else
		return !strncmp(str1, str2, idx1);
}

int CompAge(char str1[], char str2[])
{
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);
	int age1, age2;

	age1 = atoi(&str1[idx1 + 1]);	//str1[idx1+1]�� ���̰� ����� ��ġ
	age1 = atoi(&str2[idx2 + 1]);	//str2[idx2+1]�� ���̰� ����� ��ġ

	if (age1 == age2)
		return 1;
	else
		return 0;
}

