#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

struct point	// 구조체 point의 정의
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point pos1, pos2;
	double distance;

	fputs("point1 pos: ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	fputs("point2 pos: ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	//두 점간의 거리 계산 공식
	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) +
		(pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));

	printf("두 점의 거리는 %g 입니다. \n", distance);
	return 0;

}