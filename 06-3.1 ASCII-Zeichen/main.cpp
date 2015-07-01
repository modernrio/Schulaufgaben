#include <iostream>

using namespace std;

void ASCII(char x);

int main() {
	char x = 0;

	while (x != 1) {
		cout << "Bitte geben sie ein Zeichen ein: ";
		cin >> x;

		ASCII(x);
	}
	system("PAUSE");
	return 0;
}

void ASCII(char x) {
	printf("Der ASCII-Wert von %c ist %i\n", x, x);
}