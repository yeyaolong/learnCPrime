#include<iostream>
#include<cmath>
using namespace std;

class Point {
private:
	float centerX;
	float centerY;
public:
	float getCenterX() {
		return centerX;
	}
	void setCenterX(float x) {
		centerX = x;
	}
	float getCenterY() {
		return centerY;
	}
	void setCenterY(float y) {
		centerY = y;
	}
};

class Circle {
private:
	float radius; // �뾶
	Point center; // Բ��

public:
	float getRadius() {
		return radius;
	}
	void setRadius(float r) {
		radius = r;
	}
	Point getCenter() {
		return center;
	}
	void setCenter(Point point) {
		center = point;
	}
	float getDistance(Point p) {
		float pX = p.getCenterX();
		float pY = p.getCenterY();
		float distance = sqrt((pX - center.getCenterX()) * (pX - center.getCenterX()) + (pY - center.getCenterY()) * (pY - center.getCenterY()));
		cout << "pX = " << pX << "\tpY = " << pY << endl;
		cout << "centerX = " << center.getCenterX() << "\tcenterY = " << center.getCenterY() << endl;
		return distance;
	}
};



int main() {

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