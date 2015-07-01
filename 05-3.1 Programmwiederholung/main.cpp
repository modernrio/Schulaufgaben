#include <iostream>

using namespace std;

int main() {
	int x = 0, count = 1;
	cout << "Gebe [1] zum Start ein" << endl;
	cin >> x;
	
	while (x == 1) {
		cout << "Durchlauf " << count << endl;
		cout << "Gebe [1] zum Wiederholen ein" << x << endl;
		cin >> x;
		count++;
	}

	return 0;
}