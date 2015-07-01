#include <iostream>

using namespace std;

int main() {
	int x = 0, counter = 0;
	do 
	{
		cout << "Programm ausgef\x81hrt" << endl;
		cout << "Geben sie die 0 zum Wiederholen ein" << endl;
		cin >> x;
		counter++;
	} while (x == 0);

	cout << "Das Programm wurde " << counter << " mal ausgef\x81hrt" << endl;

	system("PAUSE");
	return 0;
}