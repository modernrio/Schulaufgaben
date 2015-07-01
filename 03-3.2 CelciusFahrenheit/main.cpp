#include <iostream>

using namespace std;

float c = 1;
int x = 1;

float Fahrenheit(float c) {
	return c * 1.8 + 32;
}

void getc() {
	if (c == 0) {
		exit(0);
	}
}

void CelciusFahrenheit() {
	cout << x << ". Durchlauf" << endl;
	cout << "Celcius (0 = Beenden): ";

	if (!(cin >> c)) {
		cerr << "Fehler bei der Eingabe!";
		exit(1);
	}

	getc();

	cout << "In Fahrenheit: " << Fahrenheit(c) << endl;
	x++;
	CelciusFahrenheit();
}

int main() {
	CelciusFahrenheit();
}