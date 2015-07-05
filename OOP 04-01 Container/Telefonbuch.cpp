// Telefonbuch.cpp: Implementierung der Klasse Telefonbuch.
//
//////////////////////////////////////////////////////////////////////

#include "Telefonbuch.h"

//////////////////////////////////////////////////////////////////////
// Konstruktion/Destruktion
//////////////////////////////////////////////////////////////////////

//Konstruktor(erzeugt Telfeonbuch mit drei Einträgen)
Telefonbuch::Telefonbuch() {
	std::cout << "Telefonbuch wird erzeugt!\n";

	eintraege[0] = new Eintrag(1, "Homm");
	eintraege[1] = new Eintrag(2, "Ernst");
	eintraege[2] = new Eintrag(3, "Krekel");
}

//Destruktor gibt die Meldung aus, dass das Telefonbuch zerstört wird
Telefonbuch::~Telefonbuch() {
	std::cout << "Telefonbuch mit SD zerstoert!\n";
}

//Listet alle bekannten Einträge
void Telefonbuch::listEintraege() {
	Eintrag tmp;

	for (int i = 0; i < 3; i++)
	{
		//tmp = eintraege[i]->getEintrag();

		tmp.nummer = eintraege[i]->getNummer();
		tmp.name = eintraege[i]->getName();

		std::cout << tmp.nummer << ".\t" << tmp.name << std::endl;
	}

}

//Editiert einen bestimmten Eintrag
void Telefonbuch::editEintrag(int nr, std::string nm) {
	eintraege[nr - 1]->name = nm;
}

//Gibt einen bestimmten Eintrag zurück
Eintrag &Telefonbuch::getEintrag(int nr) {

	return this->eintraege[nr]->getEintrag();
}

//Ersetzt einen Eintrag
void Telefonbuch::replaceEintrag(Eintrag *o, int n) {

	delete (this->eintraege[n]);

	this->eintraege[n] = o;
}