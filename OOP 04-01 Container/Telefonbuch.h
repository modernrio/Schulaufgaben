// Telefonbuch.h: Schnittstelle für die Klasse Telefonbuch.
//
//////////////////////////////////////////////////////////////////////

#if !defined(_TELEFONBUCH_H_)
#define _TELEFONBUCH_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <iostream>
#include "Eintrag.h"

class Telefonbuch {
private:
	Eintrag *eintraege[3];

public:
	Telefonbuch();
	~Telefonbuch();
	void listEintraege();
	void editEintrag(int, std::string);
	Eintrag &getEintrag(int nr);
	void replaceEintrag(Eintrag *o, int n);

};

#endif 
