#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} point;

void OrgSymTrans(point* ptr)	//원점 대칭
{
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition(point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

int main(void)
{
	point pos = { 7, -5 };
	OrgSymTrans(&pos);		//pos값을 원점 대칭이동시킨다
	ShowPosition(pos);
	OrgSymTrans(&pos);		//pos의 값을 원점 대칭이동시킨다.
	ShowPosition(pos);
	return 0;
}