//
// Created by fxd on 22-9-18.
//

#include <memory>
#include <iostream>
#include "Director.hpp"

using namespace builder;
int main() {
    auto builder = std::make_shared<SportCarBuilder>();
    Director director(builder);
    auto car = director.construct();
    std::cout << car->toString() << std::endl;
    return 0;
}