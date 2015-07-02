#include "main.h"

CLkw::CLkw(int anzahlAchsen, int ladekapazit�t, long n /*= 0*/, const string& h /*= " "*/) {
	m_anzahlAchsen = anzahlAchsen;
	m_ladekapazit�t = ladekapazit�t;

	setNr(n);
	setHerst(h);
}

void CLkw::display() const {
	CKfz::display();

	cout << "Anzahl Achsen: " << m_anzahlAchsen << endl;
	cout << "Ladekapazit�t: " << m_ladekapazit�t << endl;

	return;
}
