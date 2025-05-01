#include<stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}point;

typedef struct rectangle
{
	point ul;	//�»��
	point lr;	//����
} rectangle;

void show_rec_area(rectangle rec)
{
	printf("����: %d \n",
		(rec.lr.xpos - rec.ul.xpos) * (rec.lr.ypos - rec.ul.ypos));
}

void show_rec_pos(rectangle rec)
{
	printf("�� ���: [%d, %d] \n", rec.ul.xpos, rec.ul.ypos);
	printf("�� �ϴ�: [%d, %d] \n", rec.ul.xpos, rec.ul.ypos);
	printf("�� ���: [%d, %d] \n", rec.lr.xpos, rec.lr.ypos);
	printf("�� �ϴ�: [%d, %d] \n", rec.lr.xpos, rec.lr.ypos);
}

int main(void)
{
	rectangle rec1 = { {1, 1}, {4, 4} };
	rectangle rec2 = { {0, 0}, {7, 5} };
	show_rec_area(rec1);
	show_rec_pos(rec1);
	show_rec_area(rec2);
	show_rec_pos(rec2);
	return 0;
}