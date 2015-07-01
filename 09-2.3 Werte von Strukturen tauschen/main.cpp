#include <iostream>

using namespace std;

struct koordinaten {

	double x;

	double y;

};

void tauschen(koordinaten*);

int main() {

	koordinaten coord;

	cout << "x: ";

	cin >> coord.x;

	cout << "y: ";

	cin >> coord.y;



	system("cls");



	cout << "x: " << coord.x << endl << "y: " << coord.y;

	tauschen(&coord);

	cout << "\nInvertiert\n";

	cout << "x: " << coord.x << endl << "y: " << coord.y;

	cout << endl;

	system("PAUSE");

	return 0;

}

void tauschen(koordinaten* coord) {

	double temp;

	temp = coord->x;

	coord->x = coord->y;

	coord->y = temp;
}