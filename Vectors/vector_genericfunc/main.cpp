#include"vector.hpp"


int main() {
    Vector<int> vec;

    vec.pushBack(1);
    vec.pushBack(2);
    vec.pushBack(3);

    for (int i = 0; i < vec.getSize(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.popBack();

    for (int i = 0; i < vec.getSize(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.insert(4, 1);

    for (int i = 0; i < vec.getSize(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}