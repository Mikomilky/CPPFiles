#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入要比较的整数" << endl;
	cin >> a >> b;
		if (a > b)//a大于b的情况
			cout << "较大数为" << a;
		else if (a < b)//b大于a的情况
			cout << "较大数为" << b;
		else//两数相等的情况
			cout << "两数相等";
	return 0;
}