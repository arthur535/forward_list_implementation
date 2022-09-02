#include "class.hpp"

int main() {
    ams::frw_list<int> f1 {4, 5, 2, 3, 6, 1, 90};
    f1.sort();
    for (const auto& elem : f1) {
        std::cout << elem << "   ";
    }
    std::cout << std::endl << "size = " << f1.size();
    ams::frw_list<int> f3(std::move(f1));
    std::cout << std::endl;
    ams::frw_list<int> f2(3, 5);
    for (auto it = f2.begin(); it != f2.end(); ){
        std::cout << *it++ << "  ";
    }
    f1.swap(f2);
    std::cout << std::endl << "size = " << f1.size() << std::endl;
    return 0;
}
