#include <iostream>
#include <ctime>
using namespace std;

int main() {

    //�����Ϸ����
    cout << "ʯͷ��������Ϸ" << endl;
    cout << "��ʯͷ������0" << endl;
    cout << "������������1" << endl;
    cout << "����������2" << endl;

    L1://goto���
    srand((unsigned int)time(NULL));//��ֹα�����
    srand(time(0)); //��ʼ�������������

    int playerChoice;
    int computerChoice = rand() % 3 ; //�������0,1,2
    int playAgain;//�Ƿ������

    //��ҽ���ѡ��
    cout << "��ѡ����������0/1/2����";
    cin >> playerChoice;

    //�����Һ͵��Ե�ѡ�񣬲������ҳ����Ƿ�����
    cout << "���ѡ���ˣ�";
    switch (playerChoice) {
    case 0:
        cout << "ʯͷ" << endl;
        break;
    case 1:
        cout << "����" << endl;
        break;
    case 2:
        cout << "��" << endl;
        break;
    default:
        cout << "��ĳ�������������ѡ��" << endl;
        return 0;
    }

    cout << "����ѡ���ˣ�";
    switch (computerChoice) {
    case 0:
        cout << "ʯͷ" << endl;
        break;
    case 1:
        cout << "����" << endl;
        break;
    case 2:
        cout << "��" << endl;
        break;
    }

    int youMinusComputer = playerChoice - computerChoice;//���ѡ�����������������ֵ

    switch (youMinusComputer) {
    case 0: {
        cout << "ƽ��" << endl;
        goto L1;
        break; }
    case 1:
        cout << "������" << endl;
        break;
    case -2:
        cout << "������" << endl;
        break;
    case -1:
        cout << "��Ӯ��" << endl;
        break;
    case 2:
        cout << "��Ӯ��" << endl;
        break;
    }
    cout << "�Ƿ������Ϸ����������1����������0" << endl;
    cin >> playAgain;
    if (playAgain == 1)
        goto L1;
    else
        return 0;
}