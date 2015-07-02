#pragma once

//Basisklasse
class CKfz {
private:
	long nummer;
	string hersteller;
public:
	//Konstruktor
	CKfz(long L = 0, const string& herst = " ");

	//Zugriffsmethoden
	long getNr(void) const { return nummer; }
	void setNr(long n) { nummer = n; }
	const string& getHerst() const { return hersteller; }
	void setHerst(const string& h) { hersteller = h; }
	//Fahrzeug anzeigen
	void display(void) const;
};