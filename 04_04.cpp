#include<iostream>
using namespace std;

int main()
{
	char word[80];
	cin.getline(word, 80);//提取输入的字符串并放入char数组

	for (int i = 0; word[i]; i++)//遍历char，通过asc码逐个转换字符
	{
		if (word[i] >= 'A' && word[i] <= 'Z') //如果字符为大写，则转小写
			word[i] += 32;

		else if (word[i] >= 'a' && word[i] <= 'z') //如果字符为小写，则转大写
			word[i] -= 32;

	}

	cout << word;

	return 0;
}