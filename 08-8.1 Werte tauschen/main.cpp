#include <iostream>

using namespace std;

void tausche(int *a, int *b); //Name von der Aufgabenstellung vorgegeben

int main() {
	int a, b;

	cout << "Bitte geben sie a ein: ";
	cin >> a;
	cout << "Bitte geben sie b ein: ";
	cin >> b;
	
	tausche(&a, &b);

	cout<< "a und b vertauscht: " << endl
		<< "a: " << a << endl
		<< "b: " << b << endl;

	system("PAUSE");
	return 0;
}

void tausche(int *a, int *b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
}