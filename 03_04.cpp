#include <iostream>
using namespace std;

int main()
{
	int i=0, j, m, n;
	cout << "�����������������" << endl;
	cin >> n;
	while (i < n)//��ѭ����һ��ѭ����ӡһ�У���i�Լ��ƽ�
	{
		j = n;//��ѭ��1��ÿ�п�ͷ�Ŀո������еݼ�1����j�Լ��ƽ�
		while (j > i) {
			printf(" ");
			j--;
		}
		m = 0;//��ѭ��2��ÿ�е�*�����е���2����m�Լ��ƽ�
		while (m < 2 * i + 1) {
			printf("*");
			m++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

