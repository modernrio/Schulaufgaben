#include <iostream>
#include "Telefonbuch.h"

using namespace std;


int main(void) {
	Telefonbuch privat;

	privat.listEintraege();

	privat.editEintrag(3, "Schubert");

	privat.listEintraege();

	Eintrag e = privat.getEintrag(2);

	cout << e.getName() << endl;

	Eintrag *f = new Eintrag(1, "Stahl");

	cout << f->getName() << endl;

	privat.listEintraege();

	privat.replaceEintrag(f, 0);

	privat.listEintraege();

	system("PAUSE");
	return 0;
}