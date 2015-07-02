#pragma once

class CLkw : public CKfz
{
private:
	int m_anzahlAchsen;
	int m_ladekapazität;

public:
	//Konstruktor
	CLkw(int anzahlAchsen, int ladekapazität, long n = 0, const string& h = " ");
	
	//Zugriffsmethoden
	void	SetAchsen(int anzahl) { m_anzahlAchsen = anzahl; }
	void	SetLast(int last) { m_ladekapazität = last; }
	const int&	GetLast() const { return m_ladekapazität; }
	const int&	GetAchsen() const { return m_anzahlAchsen; }

	//Fahrzeug anzeigen
	void display() const;
};