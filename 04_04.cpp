#include<iostream>
using namespace std;

int main()
{
	char word[80];
	cin.getline(word, 80);//��ȡ������ַ���������char����

	for (int i = 0; word[i]; i++)//����char��ͨ��asc�����ת���ַ�
	{
		if (word[i] >= 'A' && word[i] <= 'Z') //����ַ�Ϊ��д����תСд
			word[i] += 32;

		else if (word[i] >= 'a' && word[i] <= 'z') //����ַ�ΪСд����ת��д
			word[i] -= 32;

	}

	cout << word;

	return 0;
}