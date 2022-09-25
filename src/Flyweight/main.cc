//
// Created by fxd on 22-9-25.
//
#include <vector>
#include <random>
#include "ShapeFactory.hpp"

using namespace flyweight;

int main() {
    std::vector<std::string> colors {"Red", "Blue", "Green", "White", "Black"};
    std::default_random_engine e;
    std::uniform_int_distribution<size_t> u(0, 4);
    for (int i=0; i<20; ++i) {
        auto circle = ShapeFactory::getCircle(colors[u(e)]);
        circle->setX(e() % 100);
        circle->setY(e() % 100);
        circle->setRadius(100);
        circle->draw();
    }
    return 0;
}