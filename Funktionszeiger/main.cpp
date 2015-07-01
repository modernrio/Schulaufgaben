#include <iostream>

using namespace std;

int add(int a, int b);
int multiply(int a, int b);

int main() {
	//Funktionszeiger(Klammern sind Pflicht!)
	int (*pFunktion)(int a, int b);

	int result = 0, x = 3, y = 7;

	//Funktionszeiger auf Funktion "add"
	pFunktion = add;

	//Funktion "add" über Funktionszeiger aufrufen
	result = pFunktion(x, y);
	cout << "Ergebnis: " << result << endl;

	//Funktionszeiger auf Funktion "multiply"
	pFunktion = multiply;

	//Funktion "multiply" über Funktionszeiger aufrufen
	result = pFunktion(x, y);
	cout << "Erebnis: " << result << endl;

	system("PAUSE");
	return 0;
}

int add(int a, int b) {
	return a + b;
}

int multiply(int a, int b) {
	return a * b;
}