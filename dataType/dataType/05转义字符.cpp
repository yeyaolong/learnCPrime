#include<iostream>
using namespace std;

int main5() {
	// �÷�б�������ת���ַ�
	/*
		\n ����
		\t ˮƽ�Ʊ��
		\\ ��б��
	*/

	cout << "hello world" << "\n" << "���"; // endl�� \n �ô�һ�������ǻ��е���˼��endl��ʾ��������
	cout << endl;
	cout << "\\" << endl;
	cout << "aaa\tbbb" << endl; // Ҳ����tab����Ч����
	
	cout << sizeof('\t') << endl;// һ��tab��1���ֽ�(��Ϊ����ASCII���ʾ��)
	system("pause");
	return 0;
}