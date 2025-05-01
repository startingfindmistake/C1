#include<stdio.h>  // 표준 입출력 함수 사용을 위한 헤더 파일 포함

// 2차원 좌표를 나타내는 구조체 정의
typedef struct point
{
	int xpos;  // x좌표
	int ypos;  // y좌표
} point;      // 구조체 이름을 'point'로 사용

// 두 점의 좌표를 더하는 함수
point addpoint(point pos1, point pos2)
{
	// 두 좌표의 각 x, y 값을 더해서 새로운 point 구조체 생성
	point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;  // 계산된 좌표 반환
}

// 두 점의 좌표를 빼는 함수
point minpoint(point pos1, point pos2)
{
	// 두 좌표의 각 x, y 값을 빼서 새로운 point 구조체 생성
	point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
	return pos;  // 계산된 좌표 반환
}

// 프로그램의 시작점
int main(void)
{
	// 두 개의 point 구조체 변수 선언 및 초기화
	point pos1 = { 5, 6 };
	point pos2 = { 2, 9 };
	point result;  // 결과 저장용 변수

	// pos1과 pos2를 더한 값을 result에 저장
	result = addpoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);  // 결과 출력: [7, 15]

	// pos1에서 pos2를 뺀 값을 result에 저장
	result = minpoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);  // 결과 출력: [3, -3]

	return 0;  // 프로그램 종료
}
