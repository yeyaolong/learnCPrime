#include<iostream>
using namespace std;

int main9() {

	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	int j = 0;
	for (;j < 10;j++) {
		cout << j << endl;
	}

	int k = 0;
	for (;;k++) {
		cout << k << endl;
		if (k >= 9) {
			break;
		}
	}
	int q = 0;
	for (;;) {
		cout << q << endl;
		q++;
		if (q >= 9) {
			break;
		}
	}

	system("pause");

	return 0;
}
