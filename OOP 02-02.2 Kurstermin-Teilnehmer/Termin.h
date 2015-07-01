#pragma once

class Termin {
private:
	string m_Beginn;
	string m_Termin;
	string m_Beschreibung;
	string m_Ort;

	Teilnehmer m_teilnehmer[10];

public:
	Termin();
	Termin(string beginn, string termin, string beschreibung, string ort);
	~Termin();

	void	SetBeginn(string beginn);
	void	SetTermin(string termin);
	void	SetBeschreibung(string beschreibung);
	void	SetOrt(string ort);
	string	GetBeginn();
	string	GetTermin();
	string	GetBeschreibung();
	string	GetOrt();

	bool	Anmelden(Teilnehmer teilnehmer);
	void	Abmelden(Teilnehmer teilnehmer);
};
