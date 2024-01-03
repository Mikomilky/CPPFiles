#include <iostream>
#include <list>

int main() {
    std::list<int> mylist;

    int num;
    std::cout << "���������������������������: ";
    while (std::cin >> num) {
        mylist.push_back(num);
    }

    if (mylist.empty()) {
        std::cout << "����Ϊ��!" << std::endl;
        return 0;
    }

    mylist.pop_front(); // ɾ����һ��Ԫ��
    mylist.pop_back();  // ɾ�����һ��Ԫ��

    std::cout << "ʣ�������Ԫ��: ";
    for (const auto& element : mylist) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
