#include<iostream>
#include<string>
using namespace std;

// ����Ȩ��
// ����
// public ����Ȩ��		��Ա�����ڿ��Է���,����Ҳ���Է���
// protected ����Ȩ��	���ڿ��Է��� ���ⲻ���Է���	������Է��ʸ����е�protected�ĳ�Ա
// private ˽��Ȩ��		���ڿ��Է��ʣ����ⲻ���Է��� ���಻���Է��ʸ����е�private�ĳ�Ա

// protected �� private �������ڼ̳��½ڽ�

class Person
{
	// ����Ȩ��
public:
	string m_Name; // ����

protected:
	string m_Car; // ����

private:
	int m_Password; // ���п�����

private:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}
};

int main3() {
	// ʵ����һ�� Person
	Person p1;

	p1.m_Name = "����";
	// p1.m_Car = "������"; // protected Ȩ�� �����ⲻ�ɷ���
	// p1.m_Password = 114514; // private Ȩ�� �����ⲻ�ɷ���

	// p1.func();

	system("pause");

	return 0;
}