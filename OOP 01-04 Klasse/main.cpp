#include "main.h"

int main() {
	//Erzeugen eines Kontoobjektes
	//Verwenden des Defaultkonstruktors
	Konto myKonto1, myKonto2;
	cout << "Kontoinhaber 1 = " << myKonto1.getInhaber() << endl;
	cout << "Kontonummer 1 = " << myKonto1.getKontonr() << endl;
	cout << "Kontostand 1 = " << myKonto1.getSaldo() << endl;
	cout << "*********************************" << endl << endl;

	myKonto1.setInhaber("Uwe Homm"); //Neuer Inhaber
	myKonto1.einzahlen(100.0); //Einzahlen

	cout << "Kontoinhaber 1 = " << myKonto1.getInhaber() << endl;
	cout << "Kontonummer 1 = " << myKonto1.getKontonr() << endl;
	cout << "Kontostand 1 = " << myKonto1.getSaldo() << endl;
	cout << "*********************************" << endl << endl;

	myKonto1.abheben(30.0);
	myKonto2.abheben(22.5);

	cout << "Kontoinhaber 2 = " << myKonto2.getInhaber() << endl;
	cout << "Kontonummer 2 = " << myKonto2.getKontonr() << endl;
	cout << "Kontostand 2 = " << myKonto2.getSaldo() << endl;
	cout << "*********************************" << endl << endl;

	system("PAUSE");
	return 0;
}