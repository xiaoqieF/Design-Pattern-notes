//
// Created by fxd on 22-9-18.
//

#include "Singleton.hpp"

using namespace singleton;

int main() {
    auto instance = Singleton::getInstance();
    instance->useInstance();
    return 0;
}