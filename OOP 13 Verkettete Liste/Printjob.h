#pragma once

class CPrintjob {
private:
	friend class CPrintqueue;

	string		m_jobname;
	CPrintjob*	m_next;
public:
	CPrintjob(string);
	~CPrintjob();

	CPrintjob*	GetNextJob();
};

