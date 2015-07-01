#include <iostream>

using namespace std;

int main() {
	int x = INT_MAX, y = INT_MIN, n=0;
	cout << "Bitte die zu ratende Zahl eingeben: ";

	if (!(cin >> x)) {
		cerr << "Fehler bei der Eingabe!" << endl;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		main();
	}

	system("cls");

	while (x != y) {
		n++;
		cout << "Bitte rate die vorher eingegebene Zahl: ";

		if (!(cin >> y)) {
			cerr << "Fehler bei der Eingabe!" << endl;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			--n;
		}

		if (y > x) {
			cout << "Die gesuchte Zahl ist kleiner!" << endl;
		}
		else if (y < x) {
			cout << "Die gesuchte Zahl ist gr\x94\xE1 \ber!" << endl;
		}
		else {
			cout << "Herzlichen Gl\x84 \bckwunsch! Du hast die gesuchte Zahl erfolgreich nach " << n << " Versuch(en) richtig geraten!" << endl;
			break;
		}
	}

	system("PAUSE");
	return 0;
}