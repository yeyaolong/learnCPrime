#include<iostream>
using namespace std;

// ��ָ����ó�Ա����
class Person19 {
public:
	void showClassName() {
		cout << "this is Person class" << endl;
	}

	void showPersonAge() {
		//cout << "m_Age = " << m_Age << endl;
		
		
		if (this == NULL) {
			// �ռ�飬���ӽ�׳��
			return;
		}
		// ���д��������д��Ч����ȫһ��
		// ��Ϊthis��NULL����������ִ�лᱨ��
		cout << "m_Age = " << this->m_Age << endl; 
	}

	int m_Age;
};

void test20() {
	Person19* p = NULL;
	p->showClassName();	// һ������
	p->showPersonAge(); // ��ִ�У��������ᱨ��
}

int main19() {

	test20();

	system("pause");

	return 0;
}