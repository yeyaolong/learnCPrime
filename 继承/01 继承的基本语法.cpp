#include<iostream>
using namespace std;

// ��ͨʵ��

// Javaҳ��
/*lass Java {
public:
	void header() {
		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
	}
	void footer() {
		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
	}
	void left() {
		cout << "Java��Python��C++��...�����������б�" << endl;
	}

	void content() {
		cout << "Java ѧ����Ƶ" << endl;
	}
};

class Python {
public:
	void header() {
		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
	}
	void footer() {
		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
	}
	void left() {
		cout << "Java��Python��C++��...�����������б�" << endl;
	}

	void content() {
		cout << "Python ѧ����Ƶ" << endl;
	}
};

class Cpp {
public:
	void header() {
		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
	}
	void footer() {
		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
	}
	void left() {
		cout << "Java��Python��C++��...�����������б�" << endl;
	}

	void content() {
		cout << "C++ ѧ����Ƶ" << endl;
	}
};

void test01() {
	cout << "Java������Ƶ��ҳ�����£�" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "----------------------" << endl;
	cout << "Python������Ƶ��ҳ�����£�" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "----------------------" << endl;
	cout << "C++������Ƶ��ҳ�����£�" << endl;
	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}*/

// �̳�ʵ��ҳ��
// �̳еĺô��������ظ��Ĵ���
// �﷨��class ��������: �̳з�ʽ ��������
// ���� Ҳ��Ϊ �����࣬ ���� Ҳ��Ϊ ����
// ����ҳ����
class BasePage {
public:
	void header() {
		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
	}
	void footer() {
		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
	}
	void left() {
		cout << "Java��Python��C++��...�����������б�" << endl;
	}
};

// Javaҳ��
class Java : public BasePage {
public:
	void content() {
		cout << "Java ѧ����Ƶ" << endl;
	}
};
// Pythonҳ��
class Python : public BasePage {
public:
	void content() {
		cout << "Python ѧ����Ƶ" << endl;
	}
};
// C++ҳ��
class Cpp : public BasePage {
public:
	void content() {
		cout << "C++ ѧ����Ƶ" << endl;
	}
};

void test01() {
	cout << "Java������Ƶ��ҳ�����£�" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "----------------------" << endl;
	cout << "Python������Ƶ��ҳ�����£�" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "----------------------" << endl;
	cout << "C++������Ƶ��ҳ�����£�" << endl;
	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}
int main1() {

	test01();

	system("pause");

	return 0;
}