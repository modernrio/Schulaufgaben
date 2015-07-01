#include "main.h"


Mann::Mann() {
	m_name = "Unbekannt";
	m_alter = 0;
	m_verheiratet = false;
}

Mann::Mann(string name, int alter) {
	m_name = name;
	m_alter = alter;
	m_verheiratet = false;
}

Mann::~Mann() {

}

void Mann::SetName(string name) {
	m_name = name;
}

void Mann::SetAlter(int a) {
	m_alter = a;
}

void Mann::SetFrau(Frau* frau) {
	m_frau = frau;
}

std::string Mann::GetName() {
	return m_name;
}

int Mann::GetAlter() {
	return m_alter;
}

Frau* Mann::GetFrau() {
	return m_frau;
}

bool Mann::Heiraten(Frau* frau) {
	//Überprüfen, ob Mann oder Frau schon verheiratet
	if (m_verheiratet || frau->IstVerheiratet()) {
		return false;
	}

	//Mann auf den Status "verheiratet" setzen
	m_verheiratet = true;

	//Frau auf den Status "verheiratet" setzen
	frau->HeiratsStatus(true);
	
	//Frau beim Mann eintragen
	SetFrau(frau);

	//Mann bei der Frau eintragen
	frau->SetMann(this);

	return true;
}

bool Mann::Scheiden() {
	if (m_verheiratet) {
		m_frau->HeiratsStatus(false);
		m_verheiratet = false;
	}

	return true;
}

bool Mann::IstVerheiratet() {
	return m_verheiratet;
}

void Mann::HeiratsStatus(bool status) {
	m_verheiratet = status;

	return;
}


