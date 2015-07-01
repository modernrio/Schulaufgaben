#include <stdio.h>
#include <iostream>

float Calculate(float l, float km) {
	return (l / km) * 100;
}

int main() {
	float liter;
	float km;
	float res;

	printf("Benzinverbrauch in Liter: ");
	scanf("%f", &liter);

	printf("Gefahrene Kilometer: ");
	scanf("%f", &km);

	res = Calculate(liter, km);
	printf("Der Verbauch pro 100km liegt bei %gl\n", res);

	system("PAUSE");
	return 0;
}