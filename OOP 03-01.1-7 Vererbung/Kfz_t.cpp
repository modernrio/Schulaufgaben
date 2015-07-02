#include "main.h"

int main() {
	CPkw kaefer("kaefer", false, 4321, "VW");

	kaefer.display();

	cout << endl;

	cout << "Herstellernummer(von Klasse CKfz): " << kaefer.getNr() << endl;

	cout << endl;

	CPkw carrera("carrera", true, 1000, "Porsche");

	carrera.display();

	cout << endl;

	cout << "Herstellernummer(von Klasse CKfz): " << carrera.getNr() << endl;
	cout << "Hersteller(von Klasse CKfz): " << carrera.getHerst() << endl;

	cout << endl;

	CLkw lkw(4, 1000, 7329, "Mercedes");

	lkw.display();

	system("PAUSE");
	return 0;
}
