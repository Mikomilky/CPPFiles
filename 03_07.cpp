#include <iostream>
#include <ctime>
using namespace std;

int main() {

    //输出游戏规则
    cout << "石头剪刀布游戏" << endl;
    cout << "出石头请输入0" << endl;
    cout << "出剪刀请输入1" << endl;
    cout << "出布请输入2" << endl;

    L1://goto标记
    srand((unsigned int)time(NULL));//防止伪随机数
    srand(time(0)); //初始化随机数生成器

    int playerChoice;
    int computerChoice = rand() % 3 ; //随机生成0,1,2
    int playAgain;//是否继续玩

    //玩家进行选择
    cout << "请选择（输入数字0/1/2）：";
    cin >> playerChoice;

    //输出玩家和电脑的选择，并检查玩家出手是否有误
    cout << "玩家选择了：";
    switch (playerChoice) {
    case 0:
        cout << "石头" << endl;
        break;
    case 1:
        cout << "剪刀" << endl;
        break;
    case 2:
        cout << "布" << endl;
        break;
    default:
        cout << "你的出手有误，请重新选择！" << endl;
        return 0;
    }

    cout << "电脑选择了：";
    switch (computerChoice) {
    case 0:
        cout << "石头" << endl;
        break;
    case 1:
        cout << "剪刀" << endl;
        break;
    case 2:
        cout << "布" << endl;
        break;
    }

    int youMinusComputer = playerChoice - computerChoice;//玩家选择数减电脑随机数的值

    switch (youMinusComputer) {
    case 0: {
        cout << "平手" << endl;
        goto L1;
        break; }
    case 1:
        cout << "你输了" << endl;
        break;
    case -2:
        cout << "你输了" << endl;
        break;
    case -1:
        cout << "你赢了" << endl;
        break;
    case 2:
        cout << "你赢了" << endl;
        break;
    }
    cout << "是否继续游戏？是请输入1，否请输入0" << endl;
    cin >> playAgain;
    if (playAgain == 1)
        goto L1;
    else
        return 0;
}