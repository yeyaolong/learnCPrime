#include<iostream>
#include<string>
using namespace std;

// ��Ա��������Ϊ˽��
// 1�������Լ����ƶ�дȨ��
// 2������д���Լ�����ݵ���Ч��

class Person2
{
private:
	// ���� �ɶ���д
	string m_Name;
	// ���� �ɶ���д
	int m_Age;
	// ���� ֻд
	string m_Lover;
public:
	string getName()
	{
		return m_Name;
	}
	void setName(string name)
	{
		m_Name = name;
	}
	int getAge()
	{
		return m_Age;
	}
	bool setAge(int age)
	{
		if (age >= 0 && age < 150) {
			m_Age = age;
			return true;
		}
		else {
			m_Age = 0;
			return false;
		}
		

	}
	void setLover(string lover)
	{
		m_Lover = lover;
	}
};

int main5() {

	Person2 p;
	p.setName("����");
	p.getAge();
	p.setLover("����");

	cout << "���������䣺" << endl;
	int age = 0;
	cin >> age;

	
	if (!p.setAge(age))
	{
		cout << "�����쳣" << endl;
	}
	
	cout << "����Ϊ��" << p.getName() << "\t����Ϊ��" << p.getAge() << endl;
	
	
	



	system("pause");

	return 0;
}