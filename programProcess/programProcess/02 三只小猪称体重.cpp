#include<iostream>
#include<xstring>
using namespace std;

int main2() {

	int pigA = 0;
	int pigB = 0;
	int pigC = 0;
	int max = pigA;

	cout << "������С��A�����أ�" << endl;
	cin >> pigA;

	cout << "������С��B�����أ�" << endl;
	cin >> pigB;

	cout << "������С��C�����أ�" << endl;
	cin >> pigC;

	max = pigA;
	string maxStr = "С��A����";

	if (pigB > max) {
		max = pigB;
		maxStr = "С��B����";
	}
	
	if (pigC > max) {
		max = pigC;
		maxStr = "С��C����";
	}
	cout << maxStr << endl;


	return 0;
}