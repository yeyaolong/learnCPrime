#include<iostream>
using namespace std;
int main10() {
	// 7�ı�������λ��7��ʮλ��7
	for (int i = 0; i < 100; i++) {
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			cout << i << "������" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	system("pause");

	return 0;
}