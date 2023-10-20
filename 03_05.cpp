#include <iostream>
#include <math.h> 
int prime(int i)
{
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)   //遍历除数，到这个被除数的平方根为止
	{
		if (i % j == 0)         //如果i能被j整除，i就不是质数
		{
			return 0;
		}

		return 1;                  //如果i不能被j整除，是质数

	}

}
int main()
{
	int i = 0;
	for (i = 201; i <= 300; i += 2)      //偶数都不是质数所以也可以略过
	{
		if (prime(i))                 //如果i是质数就打印i
			printf("%d ", i);
	}
	return 0;
}

