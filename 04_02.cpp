#include <iostream>
#include <stdio.h>
using namespace std;

//计算第a个数，为前两个数相加之和（除了第一和第二个数）
int fbnq(int k) {
	if (k == 1 || k == 2)
		return 1;
	return fbnq(k - 1) + fbnq(k - 2);
}

int main() {

	int n = 1;//组数
	int a = 1;//数列中第a个数
	cout << "请输入测试组数n和测试数据" << endl;
	scanf_s("%d", &n);

	//递归，n自减
	while (n--) {
		scanf_s("%d", &a);
		printf("%d\n", fbnq(a));
	}
	return 0;

}