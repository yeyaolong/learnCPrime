#include<iostream>
using namespace std;

// ��Ա�����ͳ�Ա�����ķֿ��洢

class Person17 {
	int m_A; // �Ǿ�̬��Ա���� �����ʵ������Ķ����ڴ���

	static int m_B; // ��̬��Ա���� �������ʵ������Ķ����ڴ���
	// ��Ա���� �������ʵ������Ķ����ڴ���
	void func() {

	}
	// ��̬��Ա���� �������ʵ������Ķ����ڴ���
	static void func2() {}
};

int Person17::m_B = 0;

void test14() {
	
	Person17 p; 
	// �ն���ռ�õ��ڴ�ռ� 1 �ֽ�
	// C++������ ÿ���ն���Ҳ����һ���ֽڵĿռ䣬Ϊ�����ֿն���ռ�ڴ��λ�á�
	// ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p = " << sizeof(p) << endl;
}

void test15() {
	Person17 p;
	// 4���ֽڣ���ΪPerson ��ֻ��һ��int����һ��int����ռ��4���ֽ�
	cout << "size of p = " << sizeof(p) << endl;
}

void test16() {
	Person17 p;
	// 4���ֽڣ���ΪPerson�� m_A��int����һ��int����ռ��4���ֽ�
	// m_B�Ǿ�̬��Ա����̬��Ա������ʵ������Ķ���洢��һ�𣨾�̬��Ա���� ��̬�����;�̬������
	cout << "size of p = " << sizeof(p) << endl;
}


void test17() {
	Person17 p;
	// ��Ա����Ҳ���Ǵ���ʵ������Ķ����ϵ�
	cout << "size of p = " << sizeof(p) << endl;
}

int main() {

	//test14();
	//test16();
	test17();

	system("pause");

	return 0;

}