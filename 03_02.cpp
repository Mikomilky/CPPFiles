#include <iostream>
using namespace std;

int main()
{
	int a = 0, m = 0, n = 0, b = 0;//aΪ����������mΪȥ��ĩλ�������nΪ��ȡ����ĩλ��bΪ��ת��
	cout << "������һ������" << endl;
	cin >> a;
		do
		{
			m = a / 10;//ȥĩλ
			n = a % 10;//��ȡĩλ
			a = m;//��m��ֵ��a���ƶ�ѭ����ֱ��a��������ѭ��
			b = b * 10 + n;//��������
		} while (a > 0);
	cout << "��ת���������" << b;
}