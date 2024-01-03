#include <iostream>
#include <list>

int main() {
    std::list<int> mylist;

    int num;
    std::cout << "请输入整数（输入非整数结束）: ";
    while (std::cin >> num) {
        mylist.push_back(num);
    }

    if (mylist.empty()) {
        std::cout << "链表为空!" << std::endl;
        return 0;
    }

    mylist.pop_front(); // 删除第一个元素
    mylist.pop_back();  // 删除最后一个元素

    std::cout << "剩余的链表元素: ";
    for (const auto& element : mylist) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
