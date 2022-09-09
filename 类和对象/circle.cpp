#include<cmath>
#include "circle.h"


	float Circle::getRadius() {
		return radius;
	}
	void Circle::setRadius(float r) {
		radius = r;
	}
	Point Circle::getCenter() {
		return center;
	}
	void Circle::setCenter(Point point) {
		center = point;
	}
	float Circle::getDistance(Point p) {
		float pX = p.getCenterX();
		float pY = p.getCenterY();
		float distance = sqrt((pX - center.getCenterX()) * (pX - center.getCenterX()) + (pY - center.getCenterY()) * (pY - center.getCenterY()));
		cout << "pX = " << pX << "\tpY = " << pY << endl;
		cout << "centerX = " << center.getCenterX() << "\tcenterY = " << center.getCenterY() << endl;
		return distance;
	}
