#include<iostream>
using namespace std;

int main4() {

	cout << "�ַ���ռ�У�" << sizeof(char) << "�ֽ�" << endl; // 1���ֽ�

	char ch = 'a';
	// char ch2 = "a";  // ���󣬲�����˫����
	char ch3 = 'ab';
	cout << "ch3 = " << ch3 << endl; // 'b'
	char ch4 = 'abc';
	cout << "ch4 = " << ch4 << endl; // 'c'
	char ch5 = 'abcd';
	cout << "ch5 = " << ch5 << endl; // 'd'
	cout << "'abcd'ռ��" << sizeof('abcd') << "�ֽ�" << endl;
	// char ch6 = 'abcde'; // ����	 
	// �ַ��ͱ��������ǰ��ַ�����ŵ��ڴ��д洢�����ǽ���Ӧ��ASCII����ŵ��洢��Ԫ
	/*
		a = 97
		b = 98
		...
		����'ab','abc','abcd'���Ա���ͨ��������'abcde'ȴ�޷�����ͨ��
		����Ϊ
		���ַ��ͱ��������ǰ��ַ�����ŵ��ڴ��д洢�����ǽ���Ӧ��ASCII����ŵ��洢��Ԫ��
		�ַ��ͱ���ռ��1���ֽڣ�Ҳ����8λ��'a'��ASCII����97
	*/
	
	// �ַ��ͱ�����Ӧ��ASCII����
	cout << (int)'a' << endl; // 97
	cout << (int)'A' << endl; // 65
	cout << (char)97 << endl; // 'a'

	system("pause");

	return 0;
}