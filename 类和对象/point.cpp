#include "point.h"
using namespace std;
// Point::function
// 表示 function是Point作用域下的函数

float Point::getCenterX() {
	return centerX;
}
void Point::setCenterX(float x) {
	centerX = x;
}
float Point::getCenterY() {
	return centerY;
}
void Point::setCenterY(float y) {
	centerY = y;
}