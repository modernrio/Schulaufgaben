#include "main.h"


CFahrzeug::CFahrzeug() {
	m_geschwindigkeit = 0;
	m_kennzeichen = "dummy";
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
