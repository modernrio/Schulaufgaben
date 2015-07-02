#pragma once

class CPkw : public CKfz
{
private:
	string modell;
	bool schiebedach;

public:
	//Konstruktor
	CPkw(const string& md, bool sd, long n = 0, const string& h = " ");
	//Zugriffsmethoden
	const string& getModell() const {
		return modell;
	}

	void setModell(const string& s){ modell = s; }
	bool getSchiebe() const { return schiebedach; }
	void setSchiebe(bool b) { schiebedach = b; }
	
	//Fahrzeug anzeigen
	void display(void) const;
};