#define _CRT_SECURE_NO_WARNINGS  // C4996 ��� ����
#include<stdio.h>
/*
int main(int argc, char *argv[])
{
	int i;
	float f;
	char c, str[32];

	scanf("%d, &i");		printf("1:%d\n", i);		//������ �Է�
	scanf("%f, &f");		printf("2:%f\n", f);		//�Ǽ��� �Է�
	scanf("%c, &c");		printf("3:%c\n", c);		//������ �Է�
	scanf("%s, &str");		printf("4:%s\n", str);		//���ڿ��� �Է�

}
*/

#define _CRT_SECURE_NO_WARNINGS  // Visual Studio�� C4996 ��� ����
#include <stdio.h>

int main(int argc, char* argv[])
{
    int i;
    float f;
    char c;
    char str[32];

    // ���� �Է�
    printf("������ �Է��ϼ���: ");
    scanf("%d", &i);
    printf("1: %d\n", i);

    // �Ǽ� �Է�
    printf("�Ǽ��� �Է��ϼ���: ");
    scanf("%f", &f);
    printf("2: %.2f\n", f);  // �Ǽ��� %f�� ���

    // ���� �Է� (���� ���� ó�� �ʿ�)
    getchar();  // ���� �Է¿��� ���� ���� ����
    printf("���� �� ���� �Է��ϼ���: ");
    scanf("%c", &c);
    printf("3: %c\n", c);

    // ���ڿ� �Է�
    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%s", str);  // ���ڿ��� & �� ����
    printf("4: %s\n", str);

    return 0;
}
