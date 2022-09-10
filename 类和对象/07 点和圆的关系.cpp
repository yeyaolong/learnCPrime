#include<iostream>
#include "circle.h"
#include "point.h"
using namespace std;


int main7() {

	Circle c;
	c.setRadius(10.0f);
	Point circleCenter;
	circleCenter.setCenterX(0.0f);
	circleCenter.setCenterY(0.0f);
	c.setCenter(circleCenter);
	float radius = c.getRadius();
	Point p;
	p.setCenterX(11.0f);
	p.setCenterY(0.0f);

	float distance = c.getDistance(p);
	cout << "distance = " << distance << endl;
	if (distance > radius) {
		cout << "����Բ��" << endl;
	}
	else if (distance == radius) {
		cout << "����Բ�߽���" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}

	system("pause");

	return 0;
}