#include<iostream>
using namespace std;

int main() {
	// �߼������ �� !
	int a = 10;

	cout << !a << endl; // 0

	cout << !!a << endl; // 1

	// �߼��������

	bool b = true;
	bool c = false;
	bool d = true;
	cout << (b && c) << endl;	// 0
	cout << (b && d) << endl; // 1


	// �߼��������

	cout << (b || c) << endl;	// 1
	cout << (b && d) << endl;	// 1



	system("pause");

	return 0;
}