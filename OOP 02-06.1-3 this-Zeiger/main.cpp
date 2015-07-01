#include "main.h"

int faster(const CFahrzeug& kfz1, const CFahrzeug& kfz2) {
	if (kfz1.GetSpeed() > kfz2.GetSpeed()) {
		return 1;
	}
	else if (kfz2.GetSpeed() > kfz1.GetSpeed()) {
		return 2;
	}

	return 0;
}

int main() {
	int temp;

	CFahrzeug mycar1, mycar2;
	
	cout << "Geschwindigkeit Fahrzeug 1: ";
	cin >> temp;

	mycar1.SetGeschwindigkeit(temp);

	cout << "Geschwindigkeit Fahrzeug 2: ";
	cin >> temp;

	mycar2.SetGeschwindigkeit(temp);

	cout << endl;

	int i = mycar1.faster(mycar2);

	switch (i) {
		case 0:
			cout << "Beide gleich schnell" << endl;
			break;
		case 1:
			cout << "Fahrzeug 1 ist schneller" << endl;
			break;
		case 2:
			cout << "Fahrzeug 2 ist schneller" << endl;
			break;
	}

	CFahrzeug car, newcar;

	car.SetGeschwindigkeit(20);
	car.SetHalter("Kevin");
	car.SetKennzeichen("TT-RR222");

	//Kopierkonstruktor verwenden
	newcar = CFahrzeug(car);

	cout << endl;

	//car
	cout << "car:" << endl;
	cout << "Geschwindigkeit: " << car.GetGeschwindigkeit() << endl;
	cout << "Halter: " << car.GetStringHalter() << endl;
	cout << "Kennzeichen: " << car.GetKennzeichen() << endl << endl;

	//newcar
	cout << "newcar:" << endl;
	cout << "Geschwindigkeit: " << newcar.GetGeschwindigkeit() << endl;
	cout << "Halter: " << newcar.GetStringHalter() << endl;
	cout << "Kennzeichen: " << newcar.GetKennzeichen() << endl << endl;

	cout << endl;

	CFahrzeug car01, car02;
	
	car01.Zulassen("Niklas", "GG-AS231");
	car01.SetGeschwindigkeit(200);

	car02.Zulassen("Max", "GG-AS232");
	car02.SetGeschwindigkeit(130);

	cout << "RAM-Adresse car01: " << &car01 << endl;
	cout << "RAM-Adresse car02: " << &car02 << endl;

	CFahrzeug fahrzeug = car01.faster1(car02);
	cout << "RAM-Adresse Rückgabe Objekt-Kopie: " << &fahrzeug << endl;

	CFahrzeug* p_Fahrzeug = car01.faster2(car02);
	cout << "RAM-Adresse Rückgabe Objekt-Zeiger " << p_Fahrzeug << endl;

	CFahrzeug& r_Fahrzeug = car01.faster3(car02);
	cout << "RAM-Adresse Rückgabe Referenz auf Objekt: " << &r_Fahrzeug << endl;


	system("PAUSE");
	return 0;
}