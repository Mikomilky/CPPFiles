#include <iostream>
#include <math.h> 
int prime(int i)
{
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)   //�����������������������ƽ����Ϊֹ
	{
		if (i % j == 0)         //���i�ܱ�j������i�Ͳ�������
		{
			return 0;
		}

		return 1;                  //���i���ܱ�j������������

	}

}
int main()
{
	int i = 0;
	for (i = 201; i <= 300; i += 2)      //ż����������������Ҳ�����Թ�
	{
		if (prime(i))                 //���i�������ʹ�ӡi
			printf("%d ", i);
	}
	return 0;
}

