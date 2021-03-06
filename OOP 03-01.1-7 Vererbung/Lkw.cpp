#include "main.h"

CLkw::CLkw(int anzahlAchsen, int ladekapazitšt, long n /*= 0*/, const string& h /*= " "*/) {
	m_anzahlAchsen = anzahlAchsen;
	m_ladekapazitšt = ladekapazitšt;

	setNr(n);
	setHerst(h);
}

void CLkw::display() const {
	CKfz::display();

	cout << "Anzahl Achsen: " << m_anzahlAchsen << endl;
	cout << "Ladekapazitšt: " << m_ladekapazitšt << endl;

	return;
}
