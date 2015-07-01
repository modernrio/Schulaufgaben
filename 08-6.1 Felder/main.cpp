#include <iostream>

using namespace std;

void eingabe(int* numbers);
void berechnen(int* numbers);
void ausgabe(int* numbers);

int main() {
	int numbers[10] = { 0 };

	eingabe(numbers);
	berechnen(numbers);
	ausgabe(numbers);

	system("PAUSE");
	return 0;
}

void eingabe(int* numbers)
{
	for (int i = 0; i < 10; i++) {
		cout << i + 1 << ". Zahl: ";
		cin >> numbers[i];
	}
}

void berechnen(int* numbers)
{
	for (int i = 0; i < 10; i++) {
		numbers[i] = numbers[i] * 2;
	}
}

void ausgabe(int* numbers)
{
	cout << "Ergebnis: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << i + 1 << ". Zahl: ";
		cout << numbers[i] << endl;
	}
}
