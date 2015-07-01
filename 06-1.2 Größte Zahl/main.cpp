#include <iostream>

using namespace std;

int main() {
	int res = INT_MIN, x;

	for (int i = 1; i <= 4; i++) {
		cout << "Geben sie eine Zahl ein: ";
		if (cin >> x) {
			if (x > res) {
				res = x;
			}
		}
	}

	cout << "Die gr\x94\xE1te Zahl ist: " << res << endl;

	system("PAUSE");
	return 0;
}