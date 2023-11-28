#include <iostream>
using namespace std;

class Point {
public:
	Point(int newx = 0, int newy = 0) {
		x = newx;
		y = newy;
	}
	void setxy(int newx = 0, int newy = 0);
	void showxy();

private:
	int x, y;
};

void Point::setxy(int newx, int newy){
	x = newx;
	y = newy;
}

inline void Point::showxy() {
	cout << "x:" << x << "y:" << y << endl;
}

//派生
class Rectangle : public Point {
public:
	Rectangle(int neww, int newh) {
		w = neww;
		h = newh;
	}
	int C = 0;
	int S = 0;
	void circumference() {
		C = (w + h) * 2;
	}
	void square() {
		S = w * h;
	}


private:
	int w, h;
	
};

int main() {
	Point p;
	p.setxy(4, 5);//输入点坐标
	p.showxy();
	Rectangle r(5, 6);//输入宽高
	r.circumference();
	r.square();
	cout << "周长为" << r.C << endl;
	cout << "面积为" << r.S << endl;
}