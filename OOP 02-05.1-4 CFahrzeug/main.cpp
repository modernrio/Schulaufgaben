#include "main.h"

int faster(const CFahrzeug& kfz1, const CFahrzeug& kfz2) {
	if (kfz1.GetSpeed() > kfz2.GetSpeed()) {
		return 1;
	}
	else if(kfz2.GetSpeed() > kfz1.GetSpeed()) {
		return 2;
	}

	return 0;
}

int main() {
	CFahrzeug Auto, Auto2;

	Auto.Zulassen("Markus", "GG-RE302");

	Auto.SetGeschwindigkeit(40);

	Auto.Fahren(30);
	cout << Auto.GetGeschwindigkeit() << endl;

	Auto.Bremsen(30);
	cout << Auto.GetGeschwindigkeit() << endl;

	Auto.Fahren(300);
	cout << Auto.GetGeschwindigkeit() << endl;

	Auto.Bremsen(333);
	cout << Auto.GetGeschwindigkeit() << endl;

	cout << endl << "Inline-Test" << endl << endl;

	cout << "Halter: " <<  Auto.GetHalter() << endl;
	cout << "Speed: " << Auto.GetSpeed() << endl;
	cout << "Sign: " << Auto.GetSign() << endl;

	cout << endl << "Geschwindigkeitsvergleich" << endl << endl;

	Auto2.SetGeschwindigkeit(240);
	cout << "Faster: " << faster(Auto, Auto2) << endl;

	system("PAUSE");
	return 0;
}