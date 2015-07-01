#include <iostream>

using namespace std;

double Wurzel(double x) {
	return sqrt(x);
}

int main() {
	double x = 1;
	while (x != 0) {
		cout << "Bitte geben sie eine Zahl ein (0 = Beenden): ";
		if ((cin >> x)) {
			if (x >= 0) {
				cout << "Die Wurzel dieser lautet: " << Wurzel(x) << endl;
			}
			else {
				cerr << "Negative Zahlen sind nicht erlaubt!" << endl;
			}
		}
		else {
			cerr << "Fehler bei der Eingabe!" << endl;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
		}
	}
	return 0;
}