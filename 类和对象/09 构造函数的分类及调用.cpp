#include<iostream>
using namespace std;

// ���캯���ķ��༰����
// ����
// ���ղ������ࣺ�޲ι���(Ĭ�Ϲ���)���вι���
// �������ͷ��ࣺ��ͨ���캯�����������캯��
// ����

class Person4 {
private:
	int age;
public:
	// ���캯��
	Person4() {
		cout << "���캯������ �޲ι���" << endl;
	}
	Person4(int a) {
		age = a;
		cout << "���캯������ �вι��� a = " << a << endl;
	}
	// �������캯��
	// 1��const
	// 2������
	Person4(const Person4 &p) {
		// ������������ϵ����ԣ��������¶�����
		age = p.age;
		cout << "�������캯������" << endl;
	}
	// ��������
	~Person4() {
		cout << "������������" << endl;
	}
};
// ����
void test02() {
	
	// Person4 p; // Ĭ�Ϲ��캯������
	// 1�����ŷ�
	Person4 p2(10); // �����вι��캯��
	Person4 p3(p2); // ���ÿ������캯��
	// 2����ʾ��

	// 3����ʽת����
}

int main() {

	test02();

	system("pause");

	return 0;
}