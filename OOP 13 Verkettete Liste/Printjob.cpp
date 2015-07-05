#include "main.h"

CPrintjob::CPrintjob(string jobname) {
	m_jobname = jobname;
	m_next = NULL;
}


CPrintjob::~CPrintjob() {

}

CPrintjob* CPrintjob::GetNextJob() {
	return m_next;
}
