#include<iostream>
using namespace std;

class Base3 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

// ���ÿ�����Ա������ʾ���߲鿴����ģ��
// ��ת�̷� F:
// ��ת�ļ�·�� cd ����·����
// cl /d1 reportSingleClassLayout ���� �ļ���
// ���� cl /d1 reportSingleClassLayoutSon3 "03 �̳��еĶ���ģ��.cpp"

class Son3 : public Base3 {
public:
	int m_D;
};

void test05()  {
	// private, protected, private���ᱻ�̳���������������sizeof����16 = m_A + m_B + m_C + m_D;
	// ���������зǾ�̬��Ա���Զ��ᱻ�̳���ȥ
	// ������˽�����ԣ��������������ˣ���˷��ʲ���������ȷʵ���̳���ȥ�ˡ�
	cout << "Size of Son3 = " << sizeof(Son3) << endl;	// 16

}

int main() {

	test05();

	system("pause");

	return 0;
}