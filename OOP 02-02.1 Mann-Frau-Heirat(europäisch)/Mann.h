#pragma once

class Mann
{
public:
	Mann();
	Mann(string name, int alter);
	~Mann();

	void	SetName(string name);
	void	SetAlter(int a);
	void	SetFrau(Frau *f);
	string	GetName();
	int		GetAlter();
	Frau*	GetFrau();

	bool Heiraten(Frau *f);
	bool Scheiden();
	void HeiratsStatus(bool status);
	bool IstVerheiratet();

private:
	string	m_name;
	int		m_alter;
	bool	m_verheiratet;
	Frau*	m_frau;
};
