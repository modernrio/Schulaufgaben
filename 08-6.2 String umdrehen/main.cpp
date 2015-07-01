#include <iostream>
#include <string>

using namespace std;

void invert(string* text);
bool askforshutdown();

int main() {
	string txt;

	bool done = false;
	while (!done)
	{
		cout << "Bitte geben sie einen String ein: ";
		getline(cin, txt);

		invert(&txt);
		cout << "Ihr String invertiert: " << txt << endl;

		done = askforshutdown();
		if (done) {
			break;
		}

		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	}

	return 0;
}

void invert(string* text) {
	int x = 0;
	string newtext;

	for (int i = text->length(); i >= 0; i--) {
		newtext += (*text)[i];
	}

	*text = newtext;
}

bool askforshutdown() {
	int x;
	cout << "Enter [1] to exit or any other key to restart" << endl;
	cin >> x;

	if (x == 1) {
		return true;
	}
	else {
		return false;
	}
}