#include<iostream>
using namespace std;

class Cube {
private:
	int m_L; // ��
	int m_W; // ��
	int m_H; // ��

public:
	int getML() {
		return m_L;
	}
	void setML(int L){
		m_L = L;
	}
	int getMW() {
		return m_W;
	}
	void setMW(int W) {
		m_W = W;
	}
	int getMH() {
		return m_H;
	}
	void setMH(int H) {
		m_H = H;
	}
	// ���������
	int getArea() {
		return (m_L * m_H + m_W * m_H + m_L * m_H) * 2;
	}
	// ���������
	int getVolume() {
		return m_L * m_H * m_W;
	};
	// �ó�Ա�����ж��������Ƿ����
	bool equal(Cube c) {
		// ��֣�����ж�����Ϊɶ�ܹ���
		if (c.m_L == m_L && c.m_W == m_W && c.m_H == m_H) {
		//if (c.getML() == m_L && c.getMW() == m_W && c.getMH() == m_H) {
			return true;
		}
		else {
			return false;
		}
	}

};

bool cubeEqual(Cube c1, Cube c2) {
	if (c1.getML() == c2.getML() && c1.getMW() == c2.getMW() && c1.getMH() == c2.getMH()) {
		return true;
	}
	else {
		return false;
	}
}


int main() {

	Cube c1;
	c1.setML(10);
	c1.setMW(20);
	c1.setMH(30);

	cout << "������C1�����" << c1.getArea() << endl;
	cout << "������C1�����" << c1.getVolume() << endl;

	Cube c2;
	c2.setML(10);
	c2.setMW(20);
	c2.setMH(30);

	cout << "������C1��C2�Ƿ���ȣ�" << (c1.equal(c2) ? "��" : "��") << endl;

	cout << "������C1��C2�Ƿ���ȣ�" << (cubeEqual(c1, c2) ? "��" : "��") << endl;

	system("pause");

	return 0;
}