#include <iostream>

using namespace std;

int main() {
	for (int i = 1; i <= 254; i++) {
		printf("%i:%c\t", i, i);
		if (!(i % 10)) {
			printf("\n");
		}
	}

	system("PAUSE");
	return 0;
}