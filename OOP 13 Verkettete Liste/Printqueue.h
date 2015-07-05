#pragma once

class CPrintqueue {
private:
	CPrintjob*	m_first;
	CPrintjob*	m_last;
	int			m_count;
public:
	CPrintqueue();
	~CPrintqueue();

	void		InsertPrintjob(string);				//Anhängen eines neuen Druckauftrags an die Liste
	void		DeletePrintjob();					//Löschen des ersten Druckauftrags
	CPrintjob*	ActualPrintjob();					//Gebe den aktuellen Druckauftrag zurück
	void		Print();							//Drucke den aktuellen Druckauftrag
	void		ShowPrintjobs();					//Gebe alle Druckaufträge aus
	bool		IsEmpty();							//Ist die Liste leer?
	int			GetCount() { return m_count; }		//Gebe die Anzahl der Druckaufträge zurück
};

