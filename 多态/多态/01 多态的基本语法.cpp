#include<iostream>
using namespace std;

// ��̬
class Animal {
public:
	void virtual speak() {
		cout << "������˵��" << endl;
	}
};

class Cat: public Animal {
public:
	void speak() {
		cout << "��" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() {
		cout << "��" << endl;
	}
};

// ��ַ�ڱ���׶ξ�ȷ���˺�����ַ�����ﴫ��Ķ�����Animal
// �����ߵ���animal.speak()
// �����ִ��cat.speak() 
// ��������ĵ�ַ�Ͳ�����ǰȷ������Ҫ�����н׶ν��а�
// Ҳ���Ǹ�����Animal�ĳ�Ա������Ϊ�麯��
void doSpeak(Animal &animal) {
	animal.speak();
}

// ��̬��̬��������
// 1���м̳й�ϵ
// 2������Ҫ��д����д�������麯��
// ��д = ������������ ������ �����б� ��ȫ��ͬ
// ע�⣬����Ҫд���麯���������Ƿ����麯������ν

// ��̬��̬ʹ��
// �����ָ��������� ָ���������
void test01() {
	Cat cat;

	doSpeak(cat);

	Dog dog;
	doSpeak(dog);

	Animal animal;
	doSpeak(animal);
}

int main() {

	test01();

	system("pause");

	return 0;
}