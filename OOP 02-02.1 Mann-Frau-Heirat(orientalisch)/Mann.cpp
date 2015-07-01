#include "main.h"


Mann::Mann() {
	m_name = "Unbekannt";
	m_alter = 0;
	m_verheiratet = false;
	m_temp = 0;
}

Mann::Mann(string name, int alter) {
	m_name = name;
	m_alter = alter;
	m_verheiratet = false;
	m_temp = 0;
}

Mann::~Mann() {

}

void Mann::SetName(string name) {
	m_name = name;
}

void Mann::SetAlter(int a) {
	m_alter = a;
}

void Mann::SetFrau(Frau *f, int n) {
	m_frauen[n] = f;
}

std::string Mann::GetName() {
	return m_name;
}

int Mann::GetAlter() {
	return m_alter;
}

Frau* Mann::GetFrau(int n)
{
	return m_frauen[n];
}

bool Mann::Heiraten(Frau* frau) {
	//Überprüfen, ob Mann oder Frau schon verheiratet
	if (frau->IstVerheiratet()) {
		return false;
	}

	for (int i = 0; i < 100; i++) {
		if (m_frauen[i] == frau) {
			return false;
		}
	}

	//Mann auf den Status "verheiratet" setzen
	m_verheiratet = true;

	//Frau auf den Status "verheiratet" setzen
	frau->HeiratsStatus(true);

	//Frau beim Mann eintragen
	SetFrau(frau, m_temp++);

	//Mann bei der Frau eintragen
	frau->SetMann(this);

	return true;
}

bool Mann::Scheiden(int n)
{
	if (m_verheiratet) {
		m_frauen[n]->HeiratsStatus(false);
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

int Mann::GetTemp() {
	return m_temp;
}


