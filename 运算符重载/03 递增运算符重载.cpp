#include<iostream>
using namespace std;



// �Զ������α���
class MyInteger {
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger() {
		m_Num = 0;
	}
	
	// ǰ�õ������������
	// �������ò�Ҫ����ֵ����֤�Ƕ�ͬһ������ִ�е�������
	// �������ֵ�Ļ����ͻ���
	/*
		
		cout << ++myint << endl; // 1 ����ʵ�ʴ�ӡ�����¶����ֵ
		cout << myint << endl; // 0 �����ӡ�ɶ����ֵ

	*/
	//  
	MyInteger& operator++() {
		++m_Num;
		return *this;
	}

	// ���õ������������
	// ��һ��ռλ������������������,���Բ�д����������Ϊ���ǲ�û���õ��������
	// ���õ���һ��Ҫ����ֵ����Ҫ��������
	// ��Ϊtemp��һ���ֲ�������������ɺ�ͻᱻ�ͷŵ�
	/*
	
	*/
	MyInteger operator++(int) {
		// �ȼ�¼��ʱ�Ľ��
		MyInteger temp = *this;
		// �����
		m_Num++;
		// ��󽫼�¼�������
		return temp;
	}
private:
	int m_Num;

};

// �������������
ostream& operator<<(ostream& cout, MyInteger myint) {
	cout << myint.m_Num << endl;

	return cout;
}

void test03() {
	MyInteger myint;
	
	
	cout << ++myint << endl;
	cout << myint << endl;
	//++myint; // ��MyInteger����������������Ԥ����������ɽ��յ����͵�ת��
}

void test04() {
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl; // ��MyInteger����������������Ԥ����������ɽ��յ����͵�ת��
}


int main3() {

	//test03();

	system("pause");

	return 0;
}