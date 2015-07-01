#pragma once

class Konto
{
private:
	//Attribute
	int m_kontonr;
	double m_saldo;
	string m_inhaber;
public:
	//Konstruktor
	Konto();

	//Destruktor
	~Konto();

	//Methoden
	void einzahlen(double betrag);
	void abheben(double betrag);

	//Get-/Set-Methoden
	double getSaldo();
	int getKontonr();
	string getInhaber();
	void setInhaber(string name);
};