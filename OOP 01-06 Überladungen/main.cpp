#include <iostream>
#include <string>
#include "Rectangle.h"

using namespace std;

int main() {
	int length, width;

	Rectangle rect = Rectangle();

	cout << "Länge: " << rect.GetLength() << endl << "Breite: " << rect.GetWidth() << endl;

	cout << "Neue Länge: ";
	cin >> length;

	cout << "Neue Breite: ";
	cin >> width;

	rect = Rectangle(length, width);

	cout << "Länge: " << rect.GetLength() << endl << "Breite: " << rect.GetWidth() << endl;

	system("PAUSE");
	return 0;
}