#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "������Ҫ�Ƚϵ�����" << endl;
	cin >> a >> b;
		if (a > b)//a����b�����
			cout << "�ϴ���Ϊ" << a;
		else if (a < b)//b����a�����
			cout << "�ϴ���Ϊ" << b;
		else//������ȵ����
			cout << "�������";
	return 0;
}