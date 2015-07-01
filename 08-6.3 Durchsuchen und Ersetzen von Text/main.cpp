#include <iostream>

using namespace std;

void ersetzeZeichen(char* ptr, char alt, char neu); //Von der Aufgabenstellung vorgegeben
bool askforshutdown();

int main() {
	char text[100];
	char *ptr;
	ptr = text;
	char alt;
	char neu;

	bool done = false;
	while (!done)
	{
		cout << "Gebe bitte etwas ein<maximal 100 Zeichen>: ";
		cin >> text;
		cout << "Welcher Buchstabe soll ersetzt werden? ";
		cin >> alt;
		cout << "Durch was soll der Buchstabe '" << alt << "' ersetzt werden?";
		cin >> neu;

		ersetzeZeichen(ptr, alt, neu);
		cout << "Neu: " << text << endl;

		done = askforshutdown();
	}

	return 0;
}

void ersetzeZeichen(char* ptr, char alt, char neu) {
	while(*ptr++ != NULL) {
		if (*ptr == alt) {
			*ptr = neu;
		}
	}
}

bool askforshutdown() {
	int x;
	cout << "Enter [1] to exit or any other key to restart" << endl;
	cin >> x;

	if (x == 1) {
		return true;
	}
	else {
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());

		system("cls");
		return false;
	}
}