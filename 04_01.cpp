#include <iostream>
using namespace std;

void Hanoi(int n, char src, char mid, char dest)
{
    if (n == 1) {//һ��ֻ���ƶ�һ��
        cout << n << ":" << src << "->" << dest << endl;
        return;
    }
    Hanoi(n-1, src, dest, mid);
    cout << n << ":" << src << "->" << dest << endl;
    Hanoi(n-1, mid, src, dest);//�ݹ飬��һ���������൱��mid������һ��n-1��ĺ�ŵ��
}

    int main(){
    char a,b,c;
    int n;
    cin >> n >> a >> b>> c;
    Hanoi(n, a, b, c);
    return 0;
}