#include "main.h"

Frau::Frau() {
	m_name = "Unbekannt";
	m_alter = 0;
	m_verheiratet = false;
}

Frau::Frau(string name, int alter) {
	m_name = name;
	m_alter = alter;
	m_verheiratet = false;
}

Frau::~Frau() {

}

void Frau::SetName(string name) {
	m_name = name;
}

void Frau::SetAlter(int a) {
	m_alter = a;
}

void Frau::SetMann(Mann* mann) {
	m_Mann = mann;
}

std::string Frau::GetName() {
	return m_name;
}

int Frau::GetAlter() {
	return m_alter;
}

Mann* Frau::GetMann() {
	return m_Mann;
}

bool Frau::Heiraten(Mann* mann) {
	//Überprüfen, ob Mann oder Frau schon verheiratet
	if (m_verheiratet || mann->IstVerheiratet()) {
		return false;
	}

	//Frau auf den Status "verheiratet" setzen
	m_verheiratet = true;

	//Mann auf den Status "verheiratet" setzen
	mann->HeiratsStatus(true);

	//Frau beim Mann eintragen
	SetMann(mann);

	//Mann bei der Frau eintragen
	mann->SetFrau(this);


	return true;
}

bool Frau::Scheiden() {
	if (m_verheiratet) {
		m_Mann->HeiratsStatus(false);
		m_verheiratet = false;
	}

	return true;
}

bool Frau::IstVerheiratet() {
	return m_verheiratet;
}

void Frau::HeiratsStatus(bool status) {
	m_verheiratet = status;

	return;
}



