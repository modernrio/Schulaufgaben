#include <iostream>

using namespace std;

int main() {
	int x, r, res;

	cout << "St\x81 \bck Anzahl: ";
	cin >> x;

	if (x > 99) {
		r = 15;
	}
	else if (x > 50) {
		r = 10;
	}
	else if (x > 9) {
		r = 5;
	}

	switch (r) {
	case 15:
		res = (x * 100) - (0.15*(x * 100));
		break;
	case 10:
		res = (x * 100) - (0.1*(x * 100));
		break;
	case 5:
		res = (x * 100) - (0.05*(x * 100));
		break;
	default:
		res = (x * 100);
		break;
	}

	cout << "Preis(Rabatt einbezogen):" << res << " Euro" << endl;

	system("PAUSE");
	return 0;
}