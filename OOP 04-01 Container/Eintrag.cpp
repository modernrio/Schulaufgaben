// Eintrag.cpp: Implementierung der Klasse Eintrag.
//
//////////////////////////////////////////////////////////////////////

#include "Eintrag.h"

//////////////////////////////////////////////////////////////////////
// Konstruktion/Destruktion
//////////////////////////////////////////////////////////////////////

//Konstruktor erstellt einen neuen Eintrag
Eintrag::Eintrag(int nr, std::string nm) {
	this->nummer = nr;
	this->name = nm;

	std::cout << "Eintrag erzeugt: " << this << std::endl;
}

//Standardkonstruktor erzeugt einen Eintrag ohne Inhalt
Eintrag::Eintrag() {
	std::cout << "Eintrag mit SK erzeugt: " << this << std::endl;
}

//Destruktor gibt die Meldung aus, dass der Eintrag gelöscht wird
Eintrag::~Eintrag() {
	std::cout << "Eintrag mit SD zerstoert: " << this << std::endl;
}


//Gibt den Eintrag zurück
Eintrag &Eintrag::getEintrag() {
	return *this;
}

//Gibt die Nummer des Eintrags zurück
int Eintrag::getNummer() {
	return this->nummer;
}

//Gibt den Namen des Eintrags zurück
std::string Eintrag::getName() {
	return this->name;
}


//Setzt die Nummer des Eintrags
void Eintrag::setNummer(int nr) {
	this->nummer = nr;
}

//Setzt den Namen des Eintrags
void Eintrag::setName(std::string nm) {
	this->name = nm;
}
