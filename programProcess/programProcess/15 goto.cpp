#include<iostream>
using namespace std;

int main() {

	// goto 语句 (一定要少用goto，非常影响代码逻辑)
	
	cout << "1.xxx" << endl;

	cout << "2.xxx" << endl;

	goto FLAG;

	cout << "3.xxx" << endl;

	cout << "4.xxx" << endl;
FLAG:

	cout << "5.xxx" << endl;

	system("pause");

	return 0;
}