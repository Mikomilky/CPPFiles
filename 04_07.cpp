#include <iostream>
using namespace std;

int row[8], ans[92][8], num;//row存放一行里放queen的位置，ans存放所有解,num为解数量
void queen(int n);

int main()
{
    queen(0);
    int b, n;
    scanf_s("%d", &n);
    while (n--) {
        scanf_s("%d", &b);//输出第b个串
        for (int i = 0; i < 8; i++) {
            printf("%d", ans[b - 1][i]);
        }
        printf("\n");

    }

}

void queen(int n)
{
    int i, j;
    if (n == 8) {//一种解结束，把解法存入ans
        for (i = 0; i < 8; i++) {
            ans[num][i] = row[i] + 1;
        }
        num++;
        
        return;
    }

    for (i = 0; i < 8; i++) {//尝试把当前皇后j放在不同的位置
        for (j = 0; j < n; j++) {
            if (i == row[j] || (j - n) == row[j] - i || (n - j) == row[j] - i)//检查是否同一列、同对角线
                break;
        }
        if (j == n) {//放queen
            row[n] = i;
            queen(n + 1);//递归
        }
    }
}