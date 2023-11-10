#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long double a, b;
	int x = 1;
	cout << "输入a和b" << endl;
	cin >> a >> b;

	while (pow(a, x) <= b)
		x = x+1;

	cout << x-1 ;//减去循环结束前的最后一次x自加
return 0;
}