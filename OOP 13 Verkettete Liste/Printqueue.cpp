#include "main.h"

CPrintqueue::CPrintqueue() {
	m_first = NULL;
	m_last = NULL;
	m_count = 0;
}


CPrintqueue::~CPrintqueue() {
	while (m_count > 0) {
		DeletePrintjob();
	}
}

//Anhängen eines neuen Druckauftrags an die Liste
void CPrintqueue::InsertPrintjob(string jobname) {
	//Count erhöhen
	m_count++;

	if (m_count == 1) {
		m_first = new CPrintjob(jobname);
	}
	else if (m_count == 2) {
		m_last = new CPrintjob(jobname);
		m_first->m_next = m_last;
	}
	else {
		m_last->m_next = new CPrintjob(jobname);
		m_last = m_last->m_next;
	}

	return;
}

//Löschen des ersten Druckauftrags
void CPrintqueue::DeletePrintjob() {
	if (m_count <= 0) {
		return;
	}

	//Count erniedrigen
	m_count--;

	if (m_count == 0) {
		delete m_first;
		m_first = NULL;
	}
	else if (m_count == 1) {
		m_first = m_last;
		delete m_last;
		m_last = NULL;
	}
	else {
		m_first = m_first->m_next;
	}

	return;
}

//Gebe den aktuellen Druckauftrag zurück
CPrintjob* CPrintqueue::ActualPrintjob() {
	return m_first;
}

//Drucke den aktuellen Druckauftrag
void CPrintqueue::Print() {
	if (m_count <= 0) {
		cout << "Keine auszustehenden Druckauftr\x84ge zum Drucken verfügbar!" << endl;
		return;
	}

	//Druckauftrag ausführen
	cout << "Druckauftrag \"" << m_first->m_jobname << "\" wurde erfolgreich ausgef\x81hrt." << endl;

	//Druckauftrag löschen
	DeletePrintjob();
	return;
}

//Gebe alle Druckaufträge aus
void CPrintqueue::ShowPrintjobs() {
	CPrintjob* temp;

	temp = m_first;

	cout << "Anzahl auszustehender Druckauftr\x84ge: " << m_count << endl;

	for (int i = 0; i < m_count; i++) {
		cout << "Druckauftrag: " << temp->m_jobname << endl;
		if (i != m_count - 1) {
			temp = temp->m_next;
		}
	}
	return;
}

//Ist die Liste leer?
bool CPrintqueue::IsEmpty() {
	if (m_first == NULL) {
		return true;
	}

	return false;
}
