#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long double a, b;
	int x = 1;
	cout << "����a��b" << endl;
	cin >> a >> b;

	while (pow(a, x) <= b)
		x = x+1;

	cout << x-1 ;//��ȥѭ������ǰ�����һ��x�Լ�
return 0;
}