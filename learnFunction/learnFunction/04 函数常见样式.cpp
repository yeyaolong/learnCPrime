#include<iostream>
#include<string>
using namespace std;

// 1���޲������޷���ֵ
void fn1() {
	cout << "�޲������޷���ֵ" << endl;
}
// 2���в������޷���ֵ
void fn2(double d1, double d2) {
	cout << "�в���,�޷���ֵ, d1 = " << d1 << " d2 = " << d2 << endl;
}
// 3���в������з���ֵ
double fn3(double d1, double d2) {
	cout << "�в���,�з���ֵ, d1 = " << d1 << " d2 = " << d2 << endl;
	return d1 + d2;
}
// 4���޲������з���ֵ
string fn4() {
	return "Hello World";
}
int main4() {
	// ���� �޲������޷���ֵ ����
	fn1();
	// �в������޷���ֵ
	fn2(10, 20);
	// �в������з���ֵ
	cout << fn3(30, 40) << endl;
	// �޲������з���ֵ
	cout << fn4() << endl;
	system("pause");

	return 0;
}