#include<iostream>
using namespace std;

/**
  * ������Ʒ
  * 1����ˮ
  * 2������
  * 3�����뱭��
  * 4�����븨��
  **/

class Drink {
public:
	Drink() {
		cout << "���Ϲ��캯������" << endl;
	}
	virtual void boil() = 0;
	virtual void brew() = 0;
	virtual void pour() = 0;
	virtual void addAccessories() = 0;
	void makeDrink() {
		boil();
		brew();
		pour();
		addAccessories();
	}

	~Drink() {
		cout << "����������������" << endl;
	}
};

class Coffee : public Drink {
public:
	Coffee() {
		cout << "���ȹ��캯��" << endl;
	}
	~Coffee() {
		cout << "������������" << endl;
		delete this;
	}
protected:
	virtual void boil() {
		cout << "������ˮ" << endl;
	}
	virtual void brew() {
		cout << "���ȳ���" << endl;
	}
	virtual void pour() {
		cout << "���ȵ��뱭��" << endl;
	}
	virtual void addAccessories() {
		cout << "���ȼ��븨��" << endl;
	}
};

class Tea : public Drink {
public:
	Tea() {
		cout << "�蹹�캯��" << endl;
	}
	~Tea() {
		cout << "����������" << endl;
		delete this;
	}
protected:
	virtual void boil() {
		cout << "����ˮ" << endl;
	}
	virtual void brew() {
		cout << "�����" << endl;
	}
	virtual void pour() {
		cout << "�赹�뱭��" << endl;
	}
	virtual void addAccessories() {
		cout << "����븨��" << endl;
	}
};

Drink* drinkFactory(Drink *abc) {
	abc->makeDrink();
	return abc;
}

void test07() {
	Drink* coffee = new Coffee;
	drinkFactory(coffee);
	// ��������������ˣ��������������û�е���(�����������һ��)
	delete coffee;

	Drink* tea = new Tea();
	drinkFactory(tea);
	// ��������������ˣ��������������û�е���(�����������һ��)
	delete tea;
}

int main5() {

	test07();

	system("pause");

	return 0;
}