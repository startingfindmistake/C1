#include <stdio.h>

//����Ʈ��� ����ü�� �����Ѵ�.
struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point pos1 = { 1, 2 };	//���� ���� �� �ʱ�ȭ
	struct point pos2 = { 100, 200 };	//"
	struct point* pptr = &pos1;	// pptr: pos1�� �ּҸ� ����Ű�� ������

	// ù ��° ��ǥ ���� pptr->pos1�� ����Ų��.
	(*pptr).xpos += 4;		//1 + 4 = 5
	(*pptr).ypos += 5;		//2 + 5 = 7
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);		//����ü �����ͷ� ��� ���ٽ� -> ������ ��밡��

	//�� ��° ��ǥ����
	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);	//->�� *pptr.�� ���� �ǹ��̴�
	return 0;
}