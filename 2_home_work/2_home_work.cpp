
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
int main()
{
    int size = 0;
    int num = 0;
    std::set<int> arr;

    std::cout << "[IN]:";
    std::cin >> size;
    

    for (int i = 0; i < size; ++i) {
        std::cin >> num;
        arr.insert(num);
    }
    std::cout << "[OUT]:" << std::endl;
    
    std::vector<int> vec{ arr.begin(), arr.end() };
    std::sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {return a > b; });

    for (const auto& i : vec) {
        std::cout << i << std::endl;
    }

}