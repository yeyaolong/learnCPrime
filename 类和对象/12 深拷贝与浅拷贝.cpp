#include<iostream>
using namespace std;

class Person7 {
public:
	int m_Age;
	int* m_Height; // ���
	Person7() {
		cout << "Ĭ�Ϲ��캯��" << endl;
	}
	Person7(int age, int height) {
		m_Age = age;
		m_Height = new int(height);
		cout << "�вι��캯��" << endl;
	}
	// Ĭ���ṩ�Ŀ������캯��Ҳ��ǳ����
	Person7(const Person7 & p) {
		m_Age = p.m_Age;
		// m_Height = p.m_Height; // ǳ���� Ĭ���ṩ�Ŀ������캯��Ҳ��ǳ����
		m_Height = new int(*p.m_Height); // ���
		cout << "�������캯��" << endl;
	}

	~Person7() {
		// �������룬���������ٵ�������һ���ͷŵĲ���
		if (m_Height != NULL) {
			// ǳ�������¶����ڴ��ظ��ͷ�
			delete m_Height;
			m_Height = NULL;
		}
		cout << "��������" << endl;
	}
};

void test08() {
	Person7 p1(18, 160);

	cout << "p1������Ϊ��" << p1.m_Age << "\t���Ϊ" << *p1.m_Height << endl;

	Person7 p2(p1);
	cout << "p2������Ϊ��" << p2.m_Age << "\t���Ϊ" << *p2.m_Height << endl;
	


}

int main() {

	test08();

	system("pause");

	return 0;
}