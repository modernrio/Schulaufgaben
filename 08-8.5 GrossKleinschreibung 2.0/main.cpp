#include <iostream>
#include <string>

using namespace std;

void upstring(char* text, int* x);
bool askforshutdown();

int main() {
	char text[50];
	char *ptr;
	ptr = text;
	int x = 0;

	bool done = false;
	while (!done)
	{
		cout << "Bitte gebe etwas ein: ";
		cin >> text;

		upstring(ptr, &x);
		cout << endl << "Der Text in Großbuchstaben<" << x << " Aenderungen>: " << text << endl;

		done = askforshutdown();
	}
	return 0;
}

void upstring(char* ptr, int* x) {
	*x = 0;
	ptr--;

	while(*++ptr != '\0') {
		if (islower(*ptr)) {
			*ptr = toupper(*ptr);
			*x = *x + 1;
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