#include<iostream>
using namespace std;

int main() {

	// ����bool��������
	bool flag = true;
	bool flag2 = false;

	cout << "flag = " << flag << endl; // 1,true�ı����Ƿ�0��ֵ
	cout << "flag2 = " << flag2 << endl; // 0, false�ı�����0
	// 2���鿴bool������ռ���ڴ�ռ�
	cout << sizeof(bool) << endl; // 1���ֽ�
	// ֻҪ�Ƿ�0������ֵ��������	
	// �����ͻ���˫�������ᱻ�ضϣ�����ֻҪ������0����������
	bool flag3 = 'a';
	bool flag4 = "abcdefg";
	bool flag5 = 0.0001f;
	bool flag6 = 0.0f;
	bool flag7 = 0;
	bool flag8 = 8;
	cout << "flag3 = " << flag3 << endl; // 1
	cout << "flag4 = " << flag4 << endl; // 1
	cout << "flag5 = " << flag5 << endl; // 1
	cout << "flag6 = " << flag6 << endl; // 0
	cout << "flag7 = " << flag7 << endl; // 0
	cout << "flag8 = " << flag8 << endl; // 1

	system("pause");
	return 0;
}