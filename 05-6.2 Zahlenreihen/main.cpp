#include <iostream>

using namespace std;

int main() {
	int a, b, c = 0;
	cout << "Anfang Zahlenreihe: ";
	cin >> a;
	cout << "Ende Zahlenreihe: ";
	cin >> b;

	for (a; a <= b; a++) {
		c += a;
	}
	cout << "Das Ergebnis lautet: " << c << endl;

	system("PAUSE");
	return 0;
}