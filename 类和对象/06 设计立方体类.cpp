#include<iostream>
using namespace std;

class Cube {
private:
	int m_L; // 长
	int m_W; // 宽
	int m_H; // 高

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
	// 立方体面积
	int getArea() {
		return (m_L * m_H + m_W * m_H + m_L * m_H) * 2;
	}
	// 立方体体积
	int getVolume() {
		return m_L * m_H * m_W;
	};
	// 用成员函数判断立方体是否相等
	bool equal(Cube c) {
		// 奇怪，这个判断条件为啥能过？
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

	cout << "长方体C1面积：" << c1.getArea() << endl;
	cout << "长方体C1体积：" << c1.getVolume() << endl;

	Cube c2;
	c2.setML(10);
	c2.setMW(20);
	c2.setMH(30);

	cout << "长方体C1与C2是否相等：" << (c1.equal(c2) ? "是" : "否") << endl;

	cout << "长方体C1与C2是否相等：" << (cubeEqual(c1, c2) ? "是" : "否") << endl;

	system("pause");

	return 0;
}