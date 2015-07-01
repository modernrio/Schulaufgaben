#include <iostream>

using namespace std;

int main() {
	int x = 0;

	for (int i = 65; i <= 90 || i >= 96 && i <= 122; i++) {
		x++;
		printf("%c\t", i);

		if (!(x % 7)) {
			printf("\n");
		}


		if (i == 90) {
			i = 96;
			x = 0;
			printf("\n\n");
		}
	}

	printf("\n\n");
	system("PAUSE");
	return 0;
}