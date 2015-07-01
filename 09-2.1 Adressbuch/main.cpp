#include <iostream>

#include <string>



using namespace std;



struct Adressbuch

{

	string name;

	string location;

	string phonenumber;

};



int main() {

	Adressbuch Klasse[10];



	for (int i = 0; i < 10; i++) {

		cout << "Name Schueler " << i << ":";

		getline(cin, Klasse[i].name);

		cout << "\nWohnort Schueler " << i << ":";

		getline(cin, Klasse[i].location);

		cout << "\nTelefonnummer Schueler " << i << ":";

		getline(cin, Klasse[i].phonenumber);

		cout << endl << endl;

	}



	system("cls");



	for (int i = 0; i < 10; i++) {

		cout << "Schueler " << i << ":" << endl;

		cout << "\tName: " << Klasse[i].name << endl;

		cout << "\tWohnort: " << Klasse[i].location << endl;

		cout << "\tTelefonnummer: " << Klasse[i].phonenumber << endl;

		cout << endl;

	}



	system("PAUSE");

	return 0;

}