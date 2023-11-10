#include <iostream>
#include <cstring>
using namespace std;

bool monkey[301];//判断猴子是否出局

int main()
{
    int n, m;
    while (cin >> n >> m, n || m)//n和m都为0时退出
    {
        memset(monkey, 0, sizeof(monkey));
        int i, j, c;
        i = c = 0;

        while (c < n - 1)//猴子编号从0开始所以不超过n-1
        {
            j = 0;//报数重新开始
            while (j < m)
            {
                i = (i + 1) % n;//0~n-1循环
                if (monkey[i] == 0)
                    j++;
            }//跳过出局猴子
            monkey[i] = 1;//报到m出局
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