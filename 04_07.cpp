#include <iostream>
using namespace std;

int row[8], ans[92][8], num;//row���һ�����queen��λ�ã�ans������н�,numΪ������
void queen(int n);

int main()
{
    queen(0);
    int b, n;
    scanf_s("%d", &n);
    while (n--) {
        scanf_s("%d", &b);//�����b����
        for (int i = 0; i < 8; i++) {
            printf("%d", ans[b - 1][i]);
        }
        printf("\n");

    }

}

void queen(int n)
{
    int i, j;
    if (n == 8) {//һ�ֽ�������ѽⷨ����ans
        for (i = 0; i < 8; i++) {
            ans[num][i] = row[i] + 1;
        }
        num++;
        
        return;
    }

    for (i = 0; i < 8; i++) {//���԰ѵ�ǰ�ʺ�j���ڲ�ͬ��λ��
        for (j = 0; j < n; j++) {
            if (i == row[j] || (j - n) == row[j] - i || (n - j) == row[j] - i)//����Ƿ�ͬһ�С�ͬ�Խ���
                break;
        }
        if (j == n) {//��queen
            row[n] = i;
            queen(n + 1);//�ݹ�
        }
    }
}