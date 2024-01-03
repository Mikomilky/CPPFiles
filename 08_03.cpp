#include <iostream>
#include <vector>
#include <algorithm>


void uniqueSort(std::vector<int>& vec) {
    
    std::sort(vec.begin(), vec.end());// ������
    auto last = std::unique(vec.begin(), vec.end());// ȥ���ظ�Ԫ��
    vec.erase(last, vec.end());
}

int main() {
    std::vector<int> myvector;
    int num;
    std::cout << "���������������������������: ";
    while (std::cin >> num) {
        myvector.push_back(num);
    }

    if (myvector.empty()) {
        std::cout << "����Ϊ��" << std::endl;
        return 0;
    }

    uniqueSort(myvector);

    std::cout << "������Ԫ��: ";
    for (const auto& element : myvector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
