#include<iostream>
using namespace std;

int main7() {
	const int NUM = 10;
	int current = 0;

	
	do {
		cout << current << endl;
		current++;
	} while (current < NUM);

	// while��do while���������ڣ�do while����ִ��һ��
	// ������false����Ȼ�����һ��100
	do {
		cout << 100 << endl;
	} while (false);
	
	system("pause");

	return 0;
}