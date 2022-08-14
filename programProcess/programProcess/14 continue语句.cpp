#include<iostream>
using namespace std;

int main14() {

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			continue;
		}
		cout << i << endl;
	}

	system("pause");

	return 0;
}