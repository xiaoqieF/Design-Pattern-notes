//
// Created by fxd on 22-9-21.
//

#include <memory>
#include "Shape.hpp"

using namespace bridge;
int main() {
    std::shared_ptr<Shape> circle = std::make_shared<Circle>(std::make_shared<Red>());
    circle->draw();
    std::shared_ptr<Shape> tri = std::make_shared<Triangle>(std::make_shared<Green>());
    tri->draw();
}