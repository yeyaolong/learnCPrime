#include<iostream>
#include<string>
using namespace std;


// ������ͨд���Ͷ�̬д��ʵ�ּ�����

// ��ͨʵ��
class Calculator {
public:
	Calculator(string opera, int a, int b) {
		cout << "�������๹�캯��" << endl;
		m_Opera = opera;
		m_Num1 = a;
		m_Num2 = b;
	}
	
	string m_Opera;
	int m_Num1;
	int m_Num2;
	int getResult() {
		if (m_Opera == "+") {
			return m_Num1 + m_Num2;
		}
		if (m_Opera == "-") {
			return m_Num1 - m_Num2;
		}
		if (m_Opera == "*") {
			return m_Num1 * m_Num2;
		}
		if (m_Opera == "/") {
			return m_Num1 / m_Num2;
		}
		// ��ͨд�����������չ�¹��ܣ���Ҫ�޸�Դ��
		// �ⲻ���Ͽ���ԭ��Ҳ��
		// ����ԭ��������չԴ�룬���������޸�Դ��

		return m_Num1 + m_Num2;
		
	}

	~Calculator() {
		cout << "����������������" << endl;
	}
};
// ��̬ʵ��
// ʵ�ּ������Ļ���,
class AbstractCalculator {
public:
	virtual int getResult() {
		return 0;
	};

	int m_A;
	int m_B;
};

// ʵ�ּӷ�������
class AddCalculator:public AbstractCalculator {
public:
	int getResult() {
		return m_A + m_B;
	}
};
// ʵ�ּ���������
class SubstractCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_A - m_B;
	}
};
// ʵ�ֳ˷�������
class chengCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_A * m_B;
	}
};
// ʵ�ֳ���������
class chuCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_A / m_B;
	}
};




void test04() {
	Calculator cal("-", 10, 20);

	cout << cal.getResult() << endl;
}

void test05() {
	// ��̬ʹ������
	// ����ָ���������ָ���������
	AbstractCalculator* abc = new AddCalculator;

	abc->m_A = 10;
	abc->m_B = 10;

	cout << abc->getResult() << endl;

	delete abc; // ��new�����Ķ����ڶ������ֶ�����


	AbstractCalculator* abc2 = new SubstractCalculator;

	abc2->m_A = 10;
	abc2->m_B = 10;

	cout << abc2->getResult() << endl;

	delete abc2;
}


int main3() {

	//test04();
	test05();

	system("pause");

	return 0;
}