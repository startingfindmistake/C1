#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}point;

void ShowPosition(point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos); //���� ���� ����
}

point GetCurrentPosition(void)
{
	point cen;		//����ü cen�� ����
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

int main(void)
{
	point curPos = GetCurrentPosition();
	ShowPosition(curPos);
	return 0;
}