#include <iostream>

using namespace std;

int main() {
	char x = 1;

	while (x != 0) {
		cout << "Bitte geben sie einen Buchstaben ein: " << endl;
		cin.get(x);

		if (x >= 65 && x <= 90) {
			x += 32;
			cout << "Ihr Buchstabe kleingeschrieben: " << x << endl;
		}
		else if (x >= 97 && x <= 122) {
			x -= 32;
			cout << "Ihr Buchstabe grossgeschrieben: " << x << endl;
		}
		else if (x == 48) { //48 entspricht der Zahl 0 in der ASCII-Tabelle
			x = 0;
			break;
		}

		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	}

	system("PAUSE");
	return 0;
}