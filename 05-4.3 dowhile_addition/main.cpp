#include <iostream>
#include <vector>

using namespace std;

int main() {
	int sum = 0, n, x = 0;

	cout << "n: ";
	cin >> n;
	do {
		x++;
		if (n%2) {
			sum += n;
		}
		n--;
	} while (n >= 1);

	cout << "Ergebnis: " << sum << endl;
	cout << "Das Programm wurde " << x << " mal ausgef\x81hrt" << endl;
	_sleep(1000);
	return 0;
}