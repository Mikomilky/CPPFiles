#include <iostream>
using namespace std;

int main()
{
	int i=0, j, m, n;
	cout << "请输入金字塔的行数" << endl;
	cin >> n;
	while (i < n)//外循环，一次循环打印一行，用i自加推进
	{
		j = n;//内循环1，每行开头的空格数逐行递减1，用j自减推进
		while (j > i) {
			printf(" ");
			j--;
		}
		m = 0;//内循环2，每行的*数逐行递增2，用m自加推进
		while (m < 2 * i + 1) {
			printf("*");
			m++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

