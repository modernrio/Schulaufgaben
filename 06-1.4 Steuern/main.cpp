#include <iostream>

using namespace std;

int main() {
	int dm = 1;
	while (dm != 0) {
		cout << "Bruttojahreseinkommen: ";
		if (!(cin >> dm)) {
			cerr << "Fehler bei der Eingabe!" << endl;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			main();
		}

		if (dm >= 8000 && dm <= 29999) {
			cout << "Es sind 20% Einkommensteuer f\x84llig" << endl;
			cout << "Dies sind bei ihrem Bruttojahreseinkommen " << fixed << 0.2*dm << "1DM" << endl;
		}
		else if (dm > 29999){
			cout << "Es sind 30% Einkommensteuer f\x84llig" << endl;
			cout << "Dies sind bei ihrem Bruttojahreseinkommen " << fixed << 0.3*dm << "DM" << endl;
		}
		else if(dm != 0) {
			cout << "Es ist keine Einkommensteuer f\x84llig" << endl;
		}
	}
		system("PAUSE");
		return 0;
	}