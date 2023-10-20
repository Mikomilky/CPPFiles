#include <iostream>
#include <math.h>
using namespace std;
int RootNum;//实根数

int aIsnotZero(float a)//判断a是否为0
{
	if (a == 0)
		return 0;
	else
		return 1;//若a不为0，则是一个一元二次方程，返回1；否则返回0，结束程序
}
void  get_delta(float a, float b, float c, int& RootNum) {//计算delta
	if (aIsnotZero(a)) {//a不为0的情况，继续计算delta
		float delta = b * b - 4 * a * c;
		if (delta < 0) {
			RootNum = 0;//没有根
		}
		else if (delta > 0) {
			RootNum = 2;//两实根
		}
		else
			RootNum = 1;//一实根
	}
	else {//a为0的情况
		cout << "a不能为0！" << endl;
		}
	}

void solve(float a, float b, float c, int RootNum) {//解方程
	float x1, x2;
	cout << "a=" << a << "\t" << "b=" << b << "\t" << "c=" << c << endl;
	if (aIsnotZero(a)) {
		float delta = b * b - 4 * a * c;
		if (RootNum == 2) {//如果有两实根，则用求根公式求出两根
			x1 = ((-b) + sqrt(delta)) / (2 * a);
			x2 = ((-b) - sqrt(delta)) / (2 * a);
			cout << "x1=" << x1 << "\t" << "x2=" << x2 << endl;
		}
		else if (RootNum == 1) {//如果有一实根，则用公式求出一根
			x1 = x2 = (-b) / (2 * a);
			cout << "x1=x2=" << x1 << endl;
		}
		else//无实根的情况
		{
			cout << "这个方程没有实根" << endl;
		}
	}
	else {//a为0的情况
		cout << "a不能为0！" << endl;
	}
}

int main()
{
	int i = 0;
	float a, b, c;
	for (; i < 5; i++) {
		cout << "请输入一元二次方程的三个系数a b c：" << endl;
		cin >> a >> b >> c;
		get_delta(a, b, c, RootNum);
		solve(a, b, c, RootNum);
	}
	return 0;
}
