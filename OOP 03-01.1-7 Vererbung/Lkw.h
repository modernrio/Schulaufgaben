#pragma once

class CLkw : public CKfz
{
private:
	int m_anzahlAchsen;
	int m_ladekapazit�t;

public:
	//Konstruktor
	CLkw(int anzahlAchsen, int ladekapazit�t, long n = 0, const string& h = " ");
	
	//Zugriffsmethoden
	void	SetAchsen(int anzahl) { m_anzahlAchsen = anzahl; }
	void	SetLast(int last) { m_ladekapazit�t = last; }
	const int&	GetLast() const { return m_ladekapazit�t; }
	const int&	GetAchsen() const { return m_anzahlAchsen; }

	//Fahrzeug anzeigen
	void display() const;
};