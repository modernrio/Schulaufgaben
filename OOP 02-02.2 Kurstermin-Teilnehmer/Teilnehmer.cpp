#include "main.h"

Teilnehmer::Teilnehmer() {
	m_name = "";
}

Teilnehmer::Teilnehmer(string name) {
	m_name = name;
}

Teilnehmer::~Teilnehmer() {

}

void Teilnehmer::SetName(string name) {
	m_name = name;
}

std::string Teilnehmer::GetName() {
	return m_name;
}

bool Teilnehmer::Anmelden(Termin termin) {
	termin.Anmelden(m_name);

	return true;
}

void Teilnehmer::Abmelden(Termin termin) {
	termin.Abmelden(m_name);

	return;
}
