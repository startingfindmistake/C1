#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int bread_price = 500;
	int snack_price = 400;
	int drink_price = 700;
	int total_money = 3500;

	printf("고블링빵, 새우깡, 콜라 조합으로 3500원 쓰는 경우.\n");

	for (int bread = 1; bread <= total_money / bread_price; bread++) {
		for (int snack = 1; snack <= total_money / snack_price; snack++) {
			for (int drink = 1; drink <= total_money / drink_price; drink++) {
				int total = bread * bread_price + snack * snack_price + drink * drink_price;
				if (total == total_money) {
					printf("고블링빵 %d개, 새우깡 %d개, 콜라 %d개\n", bread, snack, drink);
				}
			}
		}
	}
	return 0;
}