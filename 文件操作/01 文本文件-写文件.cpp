#include<iostream>
#include<fstream>
using namespace std;

// �ı��ļ� д�ļ�

void test01() {
	cout << "д�ļ���ʼ" << endl;
	// 1������ͷ�ļ� #include<fstream>
	// 
	// 2������������
	ofstream ofs;
	// 3���ƶ��򿪷�ʽ
	// ofs.open("test01.txt", ios::out); // ��ָ��·����Ĭ������� .cpp�ļ�·��ͬĿ¼
	ofs.open("test01.txt", ios::trunc); // ��ָ��·����Ĭ������� .cpp�ļ�·��ͬĿ¼
	// 4��д����
	ofs << "Hello World \t�������" << endl;
	ofs << "�ߺ����" << endl;
	// 5���ر���
	ofs.close();
	cout << "д�ļ�����" << endl;

}

int main() {

	test01();

	system("pause");

	return 0;
}