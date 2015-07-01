#include <iostream>

using namespace std;

double Divide() {
	double a, b;

	cout << "Dividend: ";
	cin >> a;
	cout << "Divisor: ";
	cin >> b;
	
	return a / b;
}

int main() {
	int next, x = 0;
	do {
		x++;
		cout << Divide() << endl;
		cout << "Wenn sie noch eine Rechnung ausführen wollen, geben sie bitte die 1 ein" << endl;
		cin >> next;
	} while (next == 1);

	cout << "Das Programm wurde " << x << " mal ausgef\x81hrt" << endl;
	_sleep(1000);
	return 0;
}