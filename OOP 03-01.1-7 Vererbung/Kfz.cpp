#include "main.h"

CKfz::CKfz(long L /*= 0*/, const string& herst /*= " "*/) : nummer(L), hersteller(herst) {

}

void CKfz::display(void) const {
	cout << "Nummer: " << nummer << endl;
	cout << "Hersteller: " << hersteller << endl;
}


