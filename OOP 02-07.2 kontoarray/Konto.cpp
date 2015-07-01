#include "main.h"

Konto::Konto() {
	m_kontonr = 1;
	m_saldo = 0.0;
	m_inhaber = "Dummy";
}

Konto::~Konto() {

}

//Methoden
void Konto::einzahlen(double betrag) {
	if (betrag > 0) {
		m_saldo += betrag;
	}
}

void Konto::abheben(double betrag) {
	if (betrag > 0) {
		m_saldo -= betrag;
	}
}

//get- und set-Methoden
double Konto::getSaldo() {
	return m_saldo;
}

int Konto::getKontonr() {
	return m_kontonr;
}

string Konto::getInhaber() {
	return m_inhaber;
}

void Konto::setInhaber(string name) {
	m_inhaber = name;
}