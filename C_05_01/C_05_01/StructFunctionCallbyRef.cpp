#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} point;

void OrgSymTrans(point* ptr)	//���� ��Ī
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
	OrgSymTrans(&pos);		//pos���� ���� ��Ī�̵���Ų��
	ShowPosition(pos);
	OrgSymTrans(&pos);		//pos�� ���� ���� ��Ī�̵���Ų��.
	ShowPosition(pos);
	return 0;
}