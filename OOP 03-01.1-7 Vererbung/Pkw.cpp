#include "main.h"


CPkw::CPkw(const string& md, bool sd, long n, const string& hs) : CKfz(n, hs) {
	// Anfangswerte für die Datenelemente der
	// abgeleiteten Klasse
	modell = md;
	schiebedach = sd;
}

//Methode der Basisklasse
void CPkw::display() const {
	CKfz::display();
	
	cout << "Modell: " << modell;
	cout << "\nSchiebedach: ";
	if (schiebedach) cout << "ja" << endl;
	else cout << "nein" << endl;
}

