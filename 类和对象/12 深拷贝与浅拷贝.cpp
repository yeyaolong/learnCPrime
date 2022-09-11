#include<iostream>
using namespace std;

class Person7 {
public:
	int m_Age;
	int* m_Height; // 身高
	Person7() {
		cout << "默认构造函数" << endl;
	}
	Person7(int age, int height) {
		m_Age = age;
		m_Height = new int(height);
		cout << "有参构造函数" << endl;
	}
	// 默认提供的拷贝构造函数也是浅拷贝
	Person7(const Person7 & p) {
		m_Age = p.m_Age;
		// m_Height = p.m_Height; // 浅拷贝 默认提供的拷贝构造函数也是浅拷贝
		m_Height = new int(*p.m_Height); // 深拷贝
		cout << "拷贝构造函数" << endl;
	}

	~Person7() {
		// 析构代码，将堆区开辟的数据做一个释放的操作
		if (m_Height != NULL) {
			// 浅拷贝导致堆区内存重复释放
			delete m_Height;
			m_Height = NULL;
		}
		cout << "析构函数" << endl;
	}
};

void test08() {
	Person7 p1(18, 160);

	cout << "p1的年龄为：" << p1.m_Age << "\t身高为" << *p1.m_Height << endl;

	Person7 p2(p1);
	cout << "p2的年龄为：" << p2.m_Age << "\t身高为" << *p2.m_Height << endl;
	


}

int main() {

	test08();

	system("pause");

	return 0;
}