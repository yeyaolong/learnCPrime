#include<iostream>
#include<xstring>
using namespace std;

int main2() {

	int pigA = 0;
	int pigB = 0;
	int pigC = 0;
	int max = pigA;

	cout << "请输入小猪A的体重：" << endl;
	cin >> pigA;

	cout << "请输入小猪B的体重：" << endl;
	cin >> pigB;

	cout << "请输入小猪C的体重：" << endl;
	cin >> pigC;

	max = pigA;
	string maxStr = "小猪A最重";

	if (pigB > max) {
		max = pigB;
		maxStr = "小猪B最重";
	}
	
	if (pigC > max) {
		max = pigC;
		maxStr = "小猪C最重";
	}
	cout << maxStr << endl;


	return 0;
}