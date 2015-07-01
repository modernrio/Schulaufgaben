#include <iostream>

using namespace std;

double Wurzel(double x) {
	return sqrt(x);
}

int main() {
	double x = 1;
	char n = 1;
	while (x != 0) {
		cout << "Bitte geben sie eine Zahl ein (0 = Beenden): ";
		cin >> x;

		cout << "Die Wurzel dieser lautet: " << Wurzel(x) << endl;
	}
	return 0;
}