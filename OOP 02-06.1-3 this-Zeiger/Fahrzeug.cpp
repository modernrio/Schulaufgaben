#include "main.h"


CFahrzeug::CFahrzeug() {
	m_geschwindigkeit = 0;
	m_kennzeichen = "dummy";
}

CFahrzeug::CFahrzeug(const CFahrzeug& fahrzeug) {
	this->SetGeschwindigkeit(fahrzeug.GetSpeed());
	this->SetHalter(fahrzeug.GetHalter());
	this->SetKennzeichen(fahrzeug.GetSign());
}

CFahrzeug::~CFahrzeug() {

}

void CFahrzeug::SetGeschwindigkeit(int geschwindigkeit) {
	m_geschwindigkeit = geschwindigkeit;

	return;
}

void CFahrzeug::SetKennzeichen(string kennzeichen) {
	m_kennzeichen = kennzeichen;

	return;
}

int CFahrzeug::GetGeschwindigkeit() {
	return m_geschwindigkeit;
}

std::string CFahrzeug::GetKennzeichen() {
	return m_kennzeichen;
}

void CFahrzeug::Fahren(int speed) {
	if (speed > m_geschwindigkeit) {
		m_geschwindigkeit = speed;
	}

	return;
}

void CFahrzeug::Bremsen(int speed) {
	if (speed < m_geschwindigkeit) {
		m_geschwindigkeit = speed;
	}

	return;
}

void CFahrzeug::SetHalter(string halter) {
	m_halter = halter;

	return;
}

std::string CFahrzeug::GetStringHalter() {
	return m_halter;
}

void CFahrzeug::Zulassen(string halter, string kennzeichen) {
	if (halter == "" || kennzeichen == "") {
		return;
	}

	m_halter = halter;
	m_kennzeichen = kennzeichen;

	return;
}

int CFahrzeug::faster(const CFahrzeug& kfz) {
	if (this->GetSpeed() > kfz.GetSpeed()) {
		return 1;
	}
	else if (kfz.GetSpeed() > this->GetSpeed()) {
		return 2;
	}

	return 0;
}

//Rückgabe einer Objekt-Kopie
CFahrzeug CFahrzeug::faster1(CFahrzeug& kfz2)
{
	if (this->GetSpeed() >= kfz2.GetSpeed())
		return *this;
	else
		return kfz2;
}

//Rückgabe eines Zeigers auf ein Objekt
CFahrzeug* CFahrzeug::faster2(CFahrzeug& kfz2)
{
	if (this->GetSpeed() >= kfz2.GetSpeed())
		return this;
	else
		return &kfz2;
}

//Rückgabe einer Referenz auf ein Objekt
CFahrzeug& CFahrzeug::faster3(CFahrzeug& kfz2)
{
	if (this->GetSpeed() >= kfz2.GetSpeed())
		return *this;
	else
		return kfz2;
}