#include<iostream>
using namespace std;

// ��̬
class Animal2 {
public:
	void speak() {
		cout << "������˵��" << endl;
	}
};

class Cat2 : public Animal2 {
public:
	void speak() {
		cout << "��" << endl;
	}
};

class Dog2 : public Animal2 {
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
void doSpeak2(Animal2& animal) {
	animal.speak();
}

// ��̬��̬��������
// 1���м̳й�ϵ
// 2������Ҫ��д����д�������麯��
// ��д = ������������ ������ �����б� ��ȫ��ͬ
// ע�⣬����Ҫд���麯���������Ƿ����麯������ν

// ��̬��̬ʹ��
// �����ָ��������� ָ���������
void test02() {
	Cat2 cat;

	doSpeak2(cat);

	Dog2 dog;
	doSpeak2(dog);

	Animal2 animal;
	doSpeak2(animal);
}

void test03() {
	cout << "sizeof animal = " << sizeof(Animal2) << endl; // x86�µ���4�� x64�µ���8
	// Animal2 û�г�Ա���������Ҳ�ʹ��virtualʱ����Ϊû�г�Ա����������ռ���ڴ�ռ��� 1
	// Animal2 ��Ȼû�г�Ա��������������virtual����ɶ�̬�ĳ�Ա������ռ���ڴ�ռ����󣬱�Ϊ4����8�ֽ�.
	// ������ֽڣ������洢 "�麯��ָ��"
}

int main() {

	test02();

	system("pause");

	return 0;
}