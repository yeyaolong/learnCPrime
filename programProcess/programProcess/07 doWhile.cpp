#include<iostream>
using namespace std;

int main7() {
	const int NUM = 10;
	int current = 0;

	
	do {
		cout << current << endl;
		current++;
	} while (current < NUM);

	// while和do while的区别在于，do while会先执行一次
	// 尽管是false，依然会输出一次100
	do {
		cout << 100 << endl;
	} while (false);
	
	system("pause");

	return 0;
}