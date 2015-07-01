#include <iostream>

using namespace std;

char c;
double a, b, ans;

void Welcome();
void Input();
void Calculate();
void Output();

int main() {
	while (c != 113) { //113 = q
		Welcome();
		cin >> c;

		Input();
		Calculate();
		Output();

		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	}
	
	return 0;
}

void Welcome() {
	cout<< "[a] Addition" << endl
		<< "[s] Subtraktion" << endl
		<< "[m] Multiplikation" << endl
		<< "[d] Division" << endl
		<< "[c] Anzeige zur\x81 \bcksetzen" << endl
		<< "[q] Programm beenden" << endl;
}

void Input() {
	if (c == 'a' || c == 's' || c == 'm' || c == 'd') {
		system("cls");

		cout << "1. Zahl: " << endl;
		cin >> a;

		system("cls");

		cout << "2. Zahl: " << endl;
		cin >> b;

		system("cls");
	}
}

void Calculate() {
	switch (c) {
	case 'a':
		ans = a + b;
		break;
	case 's':
		ans = a - b;
		break;
	case 'm':
		ans = a * b;
		break;
	case 'd':
		ans = a / b;
		break;
	case 'c':
		ans = 0.0;
		system("cls");
		break;
	case 'q':
		break;
	default:
		cout << "Falsche Eingabe!" << endl;
		c = 'h';
		break;
	}
}

void Output() {
	if (c != 'h') {
		cout << ans << endl;
	}
}