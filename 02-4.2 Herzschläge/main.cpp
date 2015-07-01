#include <stdio.h>
#include <iostream>

unsigned int Calculate(unsigned short h, unsigned short y) {
	return y * 525600 * h;
}

int main() {
	unsigned int h;
	unsigned int y;
	unsigned long res;

	printf("Bitte geben sie ihren Herzschlag pro Minute ein: ");
	scanf("%u", &h);

	printf("Bitte geben sie ihr Alter ein: ");
	scanf("%u", &y);

	res = Calculate(h, y);
	printf("Ihr Herz schlug insgesamt schon %u mal\n", res);

	system("PAUSE");
	return 0;
}