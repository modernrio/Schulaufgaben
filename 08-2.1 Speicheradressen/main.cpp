#include <iostream>

using namespace std;

int main() {
	int a = 16, b = 22;
	double c = 10.0, d = 234.52;

	cout << fixed;
	cout << "Wert von a: "<< a << " Adresse von a: " << &a << endl;
	cout << "Wert von b: " << b << " Adresse von b: " << &b << endl;
	cout << "Wert von c: " << c << " Adresse von c: " << &c << endl;
	cout << "Wert von d: " << d << " Adresse von d: " << &d << endl;

	system("PAUSE");
	return 0;
}