#pragma once
#include<iostream>
#include "point.h"
using namespace std;

class Circle {
private:
	float radius; // °ë¾¶
	Point center; // Ô²ÐÄ

public:
	float getRadius();
	void setRadius(float r);
	Point getCenter();
	void setCenter(Point point);
	float getDistance(Point p);
};