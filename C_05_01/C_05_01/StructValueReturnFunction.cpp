#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}point;

void ShowPosition(point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos); //값에 의한 전달
}

point GetCurrentPosition(void)
{
	point cen;		//구조체 cen에 저장
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