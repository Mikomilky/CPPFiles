#include <iostream>
#include <cstring>
using namespace std;

bool monkey[301];//�жϺ����Ƿ����

int main()
{
    int n, m;
    while (cin >> n >> m, n || m)//n��m��Ϊ0ʱ�˳�
    {
        memset(monkey, 0, sizeof(monkey));
        int i, j, c;
        i = c = 0;

        while (c < n - 1)//���ӱ�Ŵ�0��ʼ���Բ�����n-1
        {
            j = 0;//�������¿�ʼ
            while (j < m)
            {
                i = (i + 1) % n;//0~n-1ѭ��
                if (monkey[i] == 0)
                    j++;
            }//�������ֺ���
            monkey[i] = 1;//����m����
            c++;
        }
        for (c = 0; c < n; c++)
        {
            if (monkey[c] == 0)
            {
                if (c == 0) cout << n << endl;
                else cout << c << endl;
                break;
            }
        }
    }
    return 0;
}