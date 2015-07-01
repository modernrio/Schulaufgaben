#include "main.h"

Termin::Termin() {
	m_Beginn = "0 Uhr";
	m_Termin = "Unbekannt";
	m_Beschreibung = "Nicht vorhanden";
	m_Ort = "Unbekannt";
}

Termin::Termin(string beginn, string termin, string beschreibung, string ort) {
	m_Beginn = beginn;
	m_Termin = termin;
	m_Beschreibung = beschreibung;
	m_Ort = ort;

	for (int i = 0; i < 10; i++) {
		m_teilnehmer[i].SetName("");
	}
}

Termin::~Termin() {

}

void Termin::SetBeginn(string beginn) {
	m_Beginn = beginn;
}

void Termin::SetTermin(string termin) {
	m_Termin = termin;
}

void Termin::SetBeschreibung(string beschreibung) {
	m_Beschreibung = beschreibung;
}

void Termin::SetOrt(string ort) {
	m_Ort = ort;
}

std::string Termin::GetBeginn() {
	return m_Beginn;
}

std::string Termin::GetTermin() {
	return m_Termin;
}

std::string Termin::GetBeschreibung() {
	return m_Beschreibung;
}

std::string Termin::GetOrt() {
	return m_Ort;
}

bool Termin::Anmelden(Teilnehmer teilnehmer) {
	for (int i = 0; i < 10; i++) {
		//Überprüfen, ob Teilnehmer bereits angemeldet
		if (m_teilnehmer[i].GetName() == teilnehmer.GetName()) {
			return false;
		}

		//Überprüfen, ob ein Platz frei ist
		if (m_teilnehmer[i].GetName() == "") {
			m_teilnehmer[i] = teilnehmer;
			return true;
		}
	}

	return false;
}

void Termin::Abmelden(Teilnehmer teilnehmer) {
	for (int i = 0; i < 10; i++) {
		//Überprüfen, ob Teilnehmer angemeldet
		if (m_teilnehmer[i].GetName() == teilnehmer.GetName()) {
			m_teilnehmer[i].SetName("");
			return;
		}
	}

	return;
}
