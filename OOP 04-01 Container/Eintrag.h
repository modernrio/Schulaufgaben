// Eintrag.h: Schnittstelle für die Klasse Eintrag.
//
//////////////////////////////////////////////////////////////////////

#if !defined(_EINTRAG_)
#define _EINTRAG_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <iostream>
#include <string>


class Eintrag {
	friend class Telefonbuch;
private:
	int nummer;
	std::string name;

public:
	Eintrag();
	Eintrag(int, std::string);
	~Eintrag();
	Eintrag &getEintrag();
	int getNummer();
	std::string getName();
	void setNummer(int);
	void setName(std::string);

};

#endif 
