#include <iostream>

using namespace std;

int main() {
	short lg, n = 1;
	cout << "Bitte w\x84hlen sie ihre Sprache aus:" << endl << "[1] - Englisch\t[2] - Deutsch\t [3] - Andere Sprache" << endl << endl;
	cout << "Please select your language:" << endl << "[1] - English\t[2] - German\t [3] - Different Language" << endl;

	cin >> lg;
	switch (lg){
	case 1:
		do {
			cout << "Hello World! Press [1] to repeat" << endl;
			cin >> n;
		} while (n == 1);
		break;
	case 2:
		do {
			cout << "Hallo Welt! Dr\x81 \bcke [1] zum Wiederholen" << endl;
			cin >> n;
		} while (n == 1);
		break;
	case 3:
		cout << "Andere Sprachen sind nicht verf\x81gbar" << endl;
		cout << "Different languages are not available" << endl;
		break;
	default:
		cout << "Fehlerhafte Eingabe!" << endl;
		cout << "Corrupt input!" << endl;
	}
	
	system("PAUSE");
	return 0;
}