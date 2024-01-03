#include <iostream>
#include <deque>
#include <sstream>

int main() {
    std::deque<int> mydeque;

    while (true) {
        std::string command;
        std::cout << "请输入命令(push <num>, pop, print, exit): ";
        std::getline(std::cin, command);

        std::istringstream iss(command);
        std::string cmd;
        iss >> cmd;

        if (cmd == "push") {
            int num;
            if (iss >> num) {
                mydeque.push_back(num);
                std::cout << num << " 入队成功" << std::endl;
            }
            else {
                std::cout << "无效,请输入: push <num>" << std::endl;
            }
        }
        else if (cmd == "pop") {
            if (!mydeque.empty()) {
                int frontElement = mydeque.front();
                mydeque.pop_front();
                std::cout << frontElement << " 出队成功" << std::endl;
            }
            else {
                std::cout << "队列已空，无法执行pop操作" << std::endl;
            }
        }
        else if (cmd == "print") {
            if (!mydeque.empty()) {
                std::cout << "队列中的元素: ";
                for (const auto& element : mydeque) {
                    std::cout << element << " ";
                }
                std::cout << std::endl;
            }
            else {
                std::cout << "队列为空" << std::endl;
            }
        }
        else if (cmd == "exit") {
            std::cout << "退出" << std::endl;
            break;
        }
        else {
            std::cout << "请重新输入" << std::endl;
        }
    }

    return 0;
}
