#include "main.h"

int main() {
	int anzahl;
	string inhaber;
	int betrag;

	cout << "Anzahl Kontos: ";
	cin >> anzahl;

	Konto* konto = new Konto[anzahl];

	for (int i = 0; i < anzahl; i++) {
		cout << "Name Kontoinhaber Konto " << i << ": ";
		cin >> inhaber;

		konto[i].setInhaber(inhaber);

		cout << "Wieviel möchten sie einzahlen? ";
		cin >> betrag;

		konto[i].einzahlen(betrag);

		cout << endl;
	}

	cout << endl << endl;

	for (int i = 0; i < anzahl; i++) {
		cout << "Kontoinhaber Konto " << i << ": " << konto[i].getInhaber() << endl;
		cout << "Betrag Konto " << i << ": " << konto[i].getSaldo() << endl;
		cout << endl;
	}

	delete[] konto;

	system("PAUSE");
	return 0;
}
