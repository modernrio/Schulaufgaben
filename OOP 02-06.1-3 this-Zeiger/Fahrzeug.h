#pragma once

class CFahrzeug {
private:
	int		m_geschwindigkeit;
	string	m_kennzeichen;
	string	m_halter;
public:
	CFahrzeug();
	CFahrzeug(const CFahrzeug& fahrzeug);
	~CFahrzeug();

	void	SetGeschwindigkeit(int geschwindigkeit);
	void	SetKennzeichen(string kennzeichen);
	void	SetHalter(string halter);
	int		GetGeschwindigkeit();
	string	GetKennzeichen();
	string	GetStringHalter();

	char*	GetHalter() const { return (char*)m_halter.c_str(); }
	int		GetSpeed() const { return m_geschwindigkeit; }
	char*	GetSign() const { return (char*)m_kennzeichen.c_str(); }

	void	Fahren(int speed);
	void	Bremsen(int speed);

	void	Zulassen(string halter, string kennzeichen);

	int		faster(const CFahrzeug& kfz);

	CFahrzeug	faster1(CFahrzeug& kfz2);
	CFahrzeug*	faster2(CFahrzeug& kfz2);
	CFahrzeug&	faster3(CFahrzeug& kfz2);
};

