#include <iostream>
using namespace std;

int main()
{
	int a = 0, m = 0, n = 0, b = 0;//a为输入整数，m为去掉末位后的数，n为提取出的末位，b为翻转数
	cout << "请输入一个整数" << endl;
	cin >> a;
		do
		{
			m = a / 10;//去末位
			n = a % 10;//提取末位
			a = m;//把m赋值给a，推动循环，直到a除尽结束循环
			b = b * 10 + n;//倒置数字
		} while (a > 0);
	cout << "反转后的数字是" << b;
}