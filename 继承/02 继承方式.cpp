#include<iostream>
using namespace std;

// �̳з�ʽ

// �����̳�
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 : public Base1 {
public:
	void func() {
		m_A = 10; // �ܷ��ʸ���public��Ա
		m_B = 10; // �ܷ��ʸ���protected��Ա��������������Ȼ��protected��Ա
		// m_C = 10; // ���ܷ��ʸ���private��Ա

	}
};



void test02() {  
	Son1 s1;

	s1.m_A = 100;
	//s1.m_B = 100; // ���ⲻ�ܷ��ʣ���������Ȼ��protected��Ա
	// s1.m_C = 100; // ���ⲻ�ܷ���

}
// �����̳�
class Son2 : protected Base1 {
public:
	void func() {
		m_A = 10; // �ܷ��ʸ���public��Ա��������������protected��Ա
		m_B = 10; // �ܷ��ʸ���protected��Ա��������������Ȼ��protected��Ա
		// m_C = 10; // ���ܷ��ʸ���private��Ա
	}
};

class GrandSon2 : public Son2 {
public:
	void func() {
		m_A = 10;
		m_B = 10; // �����������Է���protected��Ա
		//m_C = 10;

	}
};

void test03() {
	Son2 s2;

	// s2.m_A = 100; // ���ⲻ�ܷ��ʣ���������protected��Ա
	// s1.m_B = 100; // ���ⲻ�ܷ��ʣ���������Ȼ��protected��Ա
	// s1.m_C = 100; // ���ⲻ�ܷ���

}

// ˽�м̳�
class Son3 : private Base1 {
public:
	void func() {
		m_A = 10; // �ܷ��ʸ���public��Ա��������������private��Ա
		m_B = 10; // �ܷ��ʸ���protected��Ա��������������Ȼ��private��Ա
		// m_C = 10; // ���ܷ��ʸ���private��Ա
	}
};

void test04() {
	Son3 s3;
	//s3.m_A = 100;  // ���ⲻ�ܷ��ʣ���������private��Ա
	//s3.m_B = 100;  // ���ⲻ�ܷ��ʣ���������private��Ա
	//s3.m_C = 100;  // ���ⲻ�ܷ���
}

class GrandSon3 : public Son3 {
public:
	void func() {
		//m_A = 100; // m_A��son3����privateȨ��,�޷�������
	}
};

int main2() {

	system("pause");

	return 0;
}