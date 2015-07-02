#include "main.h"

CLkw::CLkw(int anzahlAchsen, int ladekapazität, long n /*= 0*/, const string& h /*= " "*/) {
	m_anzahlAchsen = anzahlAchsen;
	m_ladekapazität = ladekapazität;

	setNr(n);
	setHerst(h);
}

void CLkw::display() const {
	CKfz::display();

	cout << "Anzahl Achsen: " << m_anzahlAchsen << endl;
	cout << "Ladekapazität: " << m_ladekapazität << endl;

	return;
}
