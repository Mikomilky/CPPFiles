#include <iostream>
using namespace std;

class Circle {
public:
	Circle(double newR);
	void circumference(double newR);
	void square(double newR);

private:
	double R;
};
Circle::Circle(double newR) :R(newR){}

void Circle::circumference(double newR) {
	double C;
	C = 3.14 * (newR + newR);
	cout << "周长为" << C << endl;
}

void Circle::square(double newR) {
	double S;
	S = 3.14 * newR * newR;
	cout << "面积为" << S << endl;
}

int main() {
	//输入数据
	Circle newCircle(4);
	newCircle.circumference(4);
	newCircle.square(4);
	return 0;

}