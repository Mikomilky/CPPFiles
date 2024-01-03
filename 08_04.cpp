#include <iostream>
#include <forward_list>


template <typename T>// 移除所有小于阈值的元素
void filterList(std::forward_list<T>& flist, const T& threshold) {
    flist.remove_if([&threshold](const T& value) {
        return value < threshold;
        });
}

int main() {
    std::forward_list<int> mylist;
    int num;
    std::cout << "请输入整数（输入非整数结束）: ";
    while (std::cin >> num) {
        mylist.push_front(num);
    }

    if (mylist.empty()) {
        std::cout << "链表为空" << std::endl;
        return 0;
    }

 
    int threshold;
    std::cout << "请输入阈值: ";
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // 清除输入缓冲区
    std::cin >> threshold;

    filterList(mylist, threshold);

    std::cout << "处理后的链表元素: ";
    for (const auto& element : mylist) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
