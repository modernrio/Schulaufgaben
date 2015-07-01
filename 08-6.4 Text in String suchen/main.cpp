#include <iostream>
#include <string>

using namespace std;

int searchstring(string stext, string text);
bool askforshutdown();

int main() {
	string stext, text;
	int result;

	bool done = false;
	while (!done)
	{
		cout << "Bitte geben sie einen Text ein<Leerzeichen erlaubt>: ";
		getline(cin, text);
		cout << "Bitte geben sie nun das zu suchende Wort ein<Keine Leerzeichen erlaubt: ";
		cin >> stext;

		result = searchstring(stext, text);
		if (result == -1) {
			cout << "Das Wort wurde im Text nicht gefunden" << endl;
		}
		else {
			cout << "Das Wort bei dem Index " << result << endl;
		}

		done = askforshutdown();
	}
	return 0;
}

int searchstring(string stext, string text) {
	int s = 0, i = 0, x;

	while (s <= stext.length() - 1)
	{
		if (i > text.length() - 1) return -1;		//Wenn i über den eigenen Text hinaus geht, gibt es keine Übereinstimmung
		if (stext[s] == text[i]) {
			if (s == 0) x = i + 1;					//Speichere den Wert für den Anfangsindex des wahrscheinlich richtigen Wortes
			if (s == stext.length() - 1) return x;	//Wenn das Ende des Suchworts erreicht ist, gebe den Anfangsindex zurück
			s++;
			i++;
		}
		else {
			s = 0;									//Setze s zurück um das vermeintlich richtige Wort wieder zu "entfernen"
			i++;
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