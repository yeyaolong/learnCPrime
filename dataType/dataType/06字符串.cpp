#include<iostream>
#include<string> // ��C++�����ַ���ʱ����Ҫ�������ͷ�ļ�
using namespace std;

int main6() {

	// C����ַ���
	char str1[] = "�ַ�������";
	cout << str1 << endl;

	// C++����ַ���
	// ��Ҫ�� #include<string>ͷ�ļ�������ʹ��string����
	// ��Ȼ��дͷ�ļ�����VS 2022��û�б��������Ǳ��������˴���
	// ����Ϊ�˿���ֲ�Ժ����õĿɱ�̷�񣬻���Ҫд�ϲ���
	string str2 = "�ַ�������";
	cout << str2 << endl;

	system("pause");

	return 0;
}