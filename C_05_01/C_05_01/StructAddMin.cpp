#include<stdio.h>  // ǥ�� ����� �Լ� ����� ���� ��� ���� ����

// 2���� ��ǥ�� ��Ÿ���� ����ü ����
typedef struct point
{
	int xpos;  // x��ǥ
	int ypos;  // y��ǥ
} point;      // ����ü �̸��� 'point'�� ���

// �� ���� ��ǥ�� ���ϴ� �Լ�
point addpoint(point pos1, point pos2)
{
	// �� ��ǥ�� �� x, y ���� ���ؼ� ���ο� point ����ü ����
	point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;  // ���� ��ǥ ��ȯ
}

// �� ���� ��ǥ�� ���� �Լ�
point minpoint(point pos1, point pos2)
{
	// �� ��ǥ�� �� x, y ���� ���� ���ο� point ����ü ����
	point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
	return pos;  // ���� ��ǥ ��ȯ
}

// ���α׷��� ������
int main(void)
{
	// �� ���� point ����ü ���� ���� �� �ʱ�ȭ
	point pos1 = { 5, 6 };
	point pos2 = { 2, 9 };
	point result;  // ��� ����� ����

	// pos1�� pos2�� ���� ���� result�� ����
	result = addpoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);  // ��� ���: [7, 15]

	// pos1���� pos2�� �� ���� result�� ����
	result = minpoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);  // ��� ���: [3, -3]

	return 0;  // ���α׷� ����
}
