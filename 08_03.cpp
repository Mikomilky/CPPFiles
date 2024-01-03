#include <iostream>
#include <vector>
#include <algorithm>


void uniqueSort(std::vector<int>& vec) {
    
    std::sort(vec.begin(), vec.end());// 先排序
    auto last = std::unique(vec.begin(), vec.end());// 去除重复元素
    vec.erase(last, vec.end());
}

int main() {
    std::vector<int> myvector;
    int num;
    std::cout << "请输入整数（输入非整数结束）: ";
    while (std::cin >> num) {
        myvector.push_back(num);
    }

    if (myvector.empty()) {
        std::cout << "容器为空" << std::endl;
        return 0;
    }

    uniqueSort(myvector);

    std::cout << "处理后的元素: ";
    for (const auto& element : myvector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
