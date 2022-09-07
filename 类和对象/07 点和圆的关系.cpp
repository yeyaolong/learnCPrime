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
	float radius; // 半径
	float centerX; // 圆心 x坐标
	float centerY; // 圆心 y坐标

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
		cout << "点在圆外" << endl;
	}
	else if (distance == radius) {
		cout << "点在圆边界上" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}

	system("pause");

	return 0;
}