#pragma once

class Termin;

class Teilnehmer {
private:
	string m_name;

public:
	Teilnehmer();
	Teilnehmer(string name);
	~Teilnehmer();

	void	SetName(string name);
	string	GetName();

	bool	Anmelden(Termin termin);
	void	Abmelden(Termin termin);
};
