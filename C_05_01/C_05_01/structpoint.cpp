#include <stdio.h>

//포인트라는 구조체를 선언한다.
struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point pos1 = { 1, 2 };	//변수 선언 및 초기화
	struct point pos2 = { 100, 200 };	//"
	struct point* pptr = &pos1;	// pptr: pos1의 주소를 가리키는 포인터

	// 첫 번째 좌표 조작 pptr->pos1를 가리킨다.
	(*pptr).xpos += 4;		//1 + 4 = 5
	(*pptr).ypos += 5;		//2 + 5 = 7
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);		//구조체 포인터로 멤버 접근시 -> 연산자 사용가능

	//두 번째 좌표조작
	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);	//->와 *pptr.은 같은 의미이다
	return 0;
}