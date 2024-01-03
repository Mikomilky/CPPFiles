#include <iostream>
#include <forward_list>


template <typename T>// �Ƴ�����С����ֵ��Ԫ��
void filterList(std::forward_list<T>& flist, const T& threshold) {
    flist.remove_if([&threshold](const T& value) {
        return value < threshold;
        });
}

int main() {
    std::forward_list<int> mylist;
    int num;
    std::cout << "���������������������������: ";
    while (std::cin >> num) {
        mylist.push_front(num);
    }

    if (mylist.empty()) {
        std::cout << "����Ϊ��" << std::endl;
        return 0;
    }

 
    int threshold;
    std::cout << "��������ֵ: ";
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // ������뻺����
    std::cin >> threshold;

    filterList(mylist, threshold);

    std::cout << "����������Ԫ��: ";
    for (const auto& element : mylist) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
