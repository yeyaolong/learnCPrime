#include<iostream>
using namespace std;

// ������
class Animal {
public:
	int m_Age;
};
// ����
// ������̳� ������μ̳е�����
// �̳�֮ǰ ���Ϲؼ��� virtual ��Ϊ��̳�
// Animal ���Ϊ �����
class Sheep: virtual public Animal {

};
// ������
class Tuo: virtual public Animal {

};

class YangTuo : public Sheep, public Tuo {

};
// ʹ����̳�ǰ
void test13() {
	YangTuo yt;

	yt.Sheep::m_Age = 19;
	yt.Tuo::m_Age = 20;

	// ���������μ̳�ʱ����������ӵ����ͬ�ĳ�Ա����Ҫ������������
	//cout << "yt.m_Age = " << yt.m_Age << endl; // ��̳е��µĲ���ȷ����Ҫ������
	cout << "yt.Sheep::m_Age" << yt.Sheep::m_Age << endl; // 19
	cout << "yt.Sheep::m_Age" << yt.Tuo::m_Age << endl; // 20

	// �������ֻҪ��һ�ݾͿ����ˣ������������ݵ�����������������ݣ�������Դ�˷�
	// �������������������������
}
// ʹ����̳к�
void test14() {
	YangTuo yt;

	yt.Sheep::m_Age = 19;
	yt.Tuo::m_Age = 20;
	cout << "yt.m_Age = " << yt.m_Age << endl; // 20,ʹ����̳к�����Ҳ�����в���ȷ������
	cout << "yt.Sheep::m_Age =" << yt.Sheep::m_Age << endl; // 20
	cout << "yt.Sheep::m_Age = " << yt.Tuo::m_Age << endl; // 20

}

int main() {

	test14();
	
	system("pause");

	return 0;
}