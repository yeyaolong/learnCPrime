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
	float centerX; // Բ�� x����
	float centerY; // Բ�� y����

public:
	float getRadius() {
		return radius;
	}
	void setRadius(float r) {
		radius = r;
	}
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
	float getDistance(Point p) {
		float pX = p.getCenterX();
		float pY = p.getCenterY();
		float distance = sqrt((pX - centerX) * (pX - centerX) + (pY - centerY) * (pY - centerY));
		
		return distance;
	}
};



int main() {

	Circle c;
	c.setRadius(10.0f);
	c.setCenterX(0.0f);
	c.setCenterY(0.0f);
	float radius = c.getRadius();
	Point p;
	p.setCenterX(11.0f);
	p.setCenterY(0.0f);

	float distance = c.getDistance(p);

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