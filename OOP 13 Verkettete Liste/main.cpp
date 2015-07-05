#include "main.h"

int menu() {
	int tmp = -1;
	bool done = false;
	
	while (done == false) {
		cout << "<1> Leere Druckwarteschlange" << endl;
		cout << "<2> Druckauftrag hinzuf\x81gen" << endl;
		cout << "<3> Druckauftrag l\x87schen" << endl;
		cout << "<4> Druckwarteschlange anzeigen" << endl;
		cout << "--------------------------------" << endl;
		cout << "<5> Programm beenden" << endl;
		cout << endl;
		cout << "Auswahl: ";
		cin >> tmp;

		if (tmp == 1 || tmp == 2 || tmp == 3 || tmp == 4 || tmp == 5) {
			done = true;
		}

		system("cls");
	}

	return tmp;
}

int main() {
	CPrintqueue* warteschlange = new CPrintqueue;
	bool done = false;
	int selection = 0;

	while (done == false) {
		selection = menu();

		switch (selection) {
		case 1:
			warteschlange = new CPrintqueue;
			break;
		case 2:
			if (warteschlange) {
				string jobname;
				cout << "Name des Druckauftrags: ";
				cin >> jobname;

				warteschlange->InsertPrintjob(jobname);
				
				system("cls");
			}
			break;
		case 3:
			if (warteschlange) {
				warteschlange->DeletePrintjob();
			}
			break;
		case 4:
			if (warteschlange) {
				warteschlange->ShowPrintjobs();
				cout << endl;
			}
			break;
		case 5:
			done = true;
			break;
		}
	}

	if (warteschlange) {
		delete warteschlange;
	}

	return 0;
}