#include <iostream>
#include <math.h>
using namespace std;
int RootNum;//ʵ����

int aIsnotZero(float a)//�ж�a�Ƿ�Ϊ0
{
	if (a == 0)
		return 0;
	else
		return 1;//��a��Ϊ0������һ��һԪ���η��̣�����1�����򷵻�0����������
}
void  get_delta(float a, float b, float c, int& RootNum) {//����delta
	if (aIsnotZero(a)) {//a��Ϊ0���������������delta
		float delta = b * b - 4 * a * c;
		if (delta < 0) {
			RootNum = 0;//û�и�
		}
		else if (delta > 0) {
			RootNum = 2;//��ʵ��
		}
		else
			RootNum = 1;//һʵ��
	}
	else {//aΪ0�����
		cout << "a����Ϊ0��" << endl;
		}
	}

void solve(float a, float b, float c, int RootNum) {//�ⷽ��
	float x1, x2;
	cout << "a=" << a << "\t" << "b=" << b << "\t" << "c=" << c << endl;
	if (aIsnotZero(a)) {
		float delta = b * b - 4 * a * c;
		if (RootNum == 2) {//�������ʵ�������������ʽ�������
			x1 = ((-b) + sqrt(delta)) / (2 * a);
			x2 = ((-b) - sqrt(delta)) / (2 * a);
			cout << "x1=" << x1 << "\t" << "x2=" << x2 << endl;
		}
		else if (RootNum == 1) {//�����һʵ�������ù�ʽ���һ��
			x1 = x2 = (-b) / (2 * a);
			cout << "x1=x2=" << x1 << endl;
		}
		else//��ʵ�������
		{
			cout << "�������û��ʵ��" << endl;
		}
	}
	else {//aΪ0�����
		cout << "a����Ϊ0��" << endl;
	}
}

int main()
{
	int i = 0;
	float a, b, c;
	for (; i < 5; i++) {
		cout << "������һԪ���η��̵�����ϵ��a b c��" << endl;
		cin >> a >> b >> c;
		get_delta(a, b, c, RootNum);
		solve(a, b, c, RootNum);
	}
	return 0;
}
