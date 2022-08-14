#include<iostream>
using namespace std;
int main10() {
	// 7的倍数、个位是7、十位是7
	for (int i = 0; i < 100; i++) {
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			cout << i << "敲桌子" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	system("pause");

	return 0;
}