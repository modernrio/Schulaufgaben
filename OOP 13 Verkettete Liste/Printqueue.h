#pragma once

class CPrintqueue {
private:
	CPrintjob*	m_first;
	CPrintjob*	m_last;
	int			m_count;
public:
	CPrintqueue();
	~CPrintqueue();

	void		InsertPrintjob(string);				//Anh�ngen eines neuen Druckauftrags an die Liste
	void		DeletePrintjob();					//L�schen des ersten Druckauftrags
	CPrintjob*	ActualPrintjob();					//Gebe den aktuellen Druckauftrag zur�ck
	void		Print();							//Drucke den aktuellen Druckauftrag
	void		ShowPrintjobs();					//Gebe alle Druckauftr�ge aus
	bool		IsEmpty();							//Ist die Liste leer?
	int			GetCount() { return m_count; }		//Gebe die Anzahl der Druckauftr�ge zur�ck
};

