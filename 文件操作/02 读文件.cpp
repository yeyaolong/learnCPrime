#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void test02() {
	// 1������ͷ�ļ�

	// 2������������
	ifstream ifs;
	// 3�����ļ� �����ж��Ƿ�ɹ�
	ifs.open("test01.txt", ios::in);
	if (ifs.is_open()) {
		// 4��������
		// ����������ݲ�����������\t��ֹͣ��
		/*string str;
		ifs >> str;
		cout << str << endl;*/

		// ��ȡ��ʽ1 ����д���޷�ʶ�� \t
		/*char buf[1024] = { 0 };
		while (ifs >> buf) {
			cout << buf << endl;
		}*/
		// ��ȡ��ʽ2
		char buf2[1024] = { 0 };
		while (ifs.getline(buf2, sizeof(buf2))) {
			cout << buf2 << endl;
		}
		// ��ȡ��ʽ3
		/*string buf3;

		while (getline(ifs, buf3)) {
			cout << buf3 << endl;
		}*/
		// ��ȡ��ʽ4 ���Ƽ�
		// һ�ζ�һ���ַ���ֱ���ļ�β
		/*char c;
		while ((c = ifs.get()) != EOF) {
			cout << c;
		}*/

		// 5���ر���
		ifs.close();
	}
	else {
		cout << "�ļ���ʧ��" << endl;
	}
	
	
}

int main2() {

	test02();

	system("pause");

	return 0;
}