#include<iostream>
using namespace std;

class Person20 {
public:
	int m_A;
	mutable int m_B; // �����������ʹ�ڳ�������Ҳ�����޸�ֵ
	// thisָ��ı�����  ָ�볣���� ָ���ָ���ǲ������޸ĵ�
	// Person* const this
	void showPerson() {
		m_A = 100;
		// �����д���൱��
		//this.m_A = 100;
		// Ҳ����˵����Ȼָ���ָ����ڴ��ַ�����޸ģ�����ֵ�����޸�
		cout << "showPerson" << endl;
	}
	// ���������൱�ڽ�thisָ�����ɣ�ָ�볣��+����ָ�룬Ҳ�����ڴ��ַ��ֵ���������޸���
	// const Person* const this
	void showPerson2() const {
		//m_A = 100; // ���ʽ�����ǿ��޸ĵ���ֵ
		// �����д���൱��
		//this.m_A = 100;

		m_B = 100; // ����mutable�ؼ��ֵģ���ʹ�ڳ�������Ҳ�ǿ����޸ĵ�
		
		cout << "showPerson2 m_B = " << m_B << endl;
	}
};

void test21() {
	Person20 p;
	//p.showPerson();
	p.showPerson2();
}

// ������
void test22() {
	const Person20 p; // �ڶ���ǰ��const����Ϊ������
	//p.m_A = 100; // �����޸ĵ���ֵ
	p.m_B = 100; // mutable���εĳ�Ա���ڳ�������Ҳ�����޸�

	// ������ֻ�ܵ��ó�����
	//p.showPerson(); // ����������
	p.showPerson2();

}

int main() {

	//test21();

	test22();

	system("pause");

	return 0;
}