#include <iostream>
using namespace std;

void Hanoi(int n, char src, char mid, char dest)
{
    if (n == 1) {//一层只需移动一次
        cout << n << ":" << src << "->" << dest << endl;
        return;
    }
    Hanoi(n-1, src, dest, mid);
    cout << n << ":" << src << "->" << dest << endl;
    Hanoi(n-1, mid, src, dest);//递归，上一步操作后相当于mid柱上是一个n-1层的汉诺塔
}

    int main(){
    char a,b,c;
    int n;
    cin >> n >> a >> b>> c;
    Hanoi(n, a, b, c);
    return 0;
}