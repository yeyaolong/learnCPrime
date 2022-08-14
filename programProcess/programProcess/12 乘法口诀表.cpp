#include<iostream>
using namespace std;

int main12() {

	for (int row = 1; row < 10; row++) {
		for (int column = 1; column <= row; column++) {
			cout << row << " * " << column << " = " << row * column << "\t";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}
