#include <iostream>
#include <deque>
#include <sstream>

int main() {
    std::deque<int> mydeque;

    while (true) {
        std::string command;
        std::cout << "����������(push <num>, pop, print, exit): ";
        std::getline(std::cin, command);

        std::istringstream iss(command);
        std::string cmd;
        iss >> cmd;

        if (cmd == "push") {
            int num;
            if (iss >> num) {
                mydeque.push_back(num);
                std::cout << num << " ��ӳɹ�" << std::endl;
            }
            else {
                std::cout << "��Ч,������: push <num>" << std::endl;
            }
        }
        else if (cmd == "pop") {
            if (!mydeque.empty()) {
                int frontElement = mydeque.front();
                mydeque.pop_front();
                std::cout << frontElement << " ���ӳɹ�" << std::endl;
            }
            else {
                std::cout << "�����ѿգ��޷�ִ��pop����" << std::endl;
            }
        }
        else if (cmd == "print") {
            if (!mydeque.empty()) {
                std::cout << "�����е�Ԫ��: ";
                for (const auto& element : mydeque) {
                    std::cout << element << " ";
                }
                std::cout << std::endl;
            }
            else {
                std::cout << "����Ϊ��" << std::endl;
            }
        }
        else if (cmd == "exit") {
            std::cout << "�˳�" << std::endl;
            break;
        }
        else {
            std::cout << "����������" << std::endl;
        }
    }

    return 0;
}
