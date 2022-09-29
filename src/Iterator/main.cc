//
// Created by fxd on 22-9-29.
//
#include <iostream>
#include "Array.hpp"

using namespace iterator;

int main() {
    Array<int> arr;
    for (int i = 0; i < 20; ++i) {
        arr.push_back(i);
    }
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        std::cout << *it << std::endl;
    }
    for (const int& it : arr) {
        std::cout << it << std::endl;
    }

    return 0;
}