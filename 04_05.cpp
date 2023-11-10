#include <iostream>
#include <string>
using namespace std;

int main() {

	int n = 1;
	cin >> n;

	string name[100];
	int money[100];
	memset(money, 0, sizeof money);//初始化money数组不然会警告

	for (int i = 0; i < n; i++) {

		char ganbu, xibu;
		int pjscore, pyscore,lunwen;

		cin >> name[i] >> pjscore >> pyscore >> ganbu >> xibu >> lunwen;

		if (pjscore > 80 && lunwen >= 1)
			money[i] += 8000;

		if (pjscore > 85 && pyscore > 80)
			money[i] += 4000;

		if (pjscore > 90)
			money[i] += 2000;

		if (pjscore > 85 && xibu == 'Y')
			money[i] += 1000;

		if (pyscore > 80 && ganbu == 'Y')
			money[i] += 850;

	}
	int max = 0;//奖学金最高者的编号
	int moneyacc = 0;//奖学金总数

	for (int i = 0; i < n; i++) {

		if (money[i] > money[max]) 
			max = i;
		moneyacc += money[i];
	}
	cout << name[max] << endl << money[max] << endl << moneyacc;
	return 0;
}