#include <iostream>
#include <stdio.h>
using namespace std;

//�����a������Ϊǰ���������֮�ͣ����˵�һ�͵ڶ�������
int fbnq(int k) {
	if (k == 1 || k == 2)
		return 1;
	return fbnq(k - 1) + fbnq(k - 2);
}

int main() {

	int n = 1;//����
	int a = 1;//�����е�a����
	cout << "�������������n�Ͳ�������" << endl;
	scanf_s("%d", &n);

	//�ݹ飬n�Լ�
	while (n--) {
		scanf_s("%d", &a);
		printf("%d\n", fbnq(a));
	}
	return 0;

}