#pragma once

//Klasse "Mann" deklarieren, damit die Klasse "Frau" die Klasse kennt
class Mann;

class Frau
{
public:
	Frau();
	Frau(string name, int alter);
	~Frau();

	void	SetName(string name);
	void	SetAlter(int a);
	void	SetMann(Mann *f);
	string	GetName();
	int		GetAlter();
	Mann*	GetMann();

	bool Heiraten(Mann *f);
	bool Scheiden();
	void HeiratsStatus(bool status);
	bool IstVerheiratet();

private:
	string	m_name;
	int		m_alter;
	bool	m_verheiratet;
	Mann*	m_Mann;
};

