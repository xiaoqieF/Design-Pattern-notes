//
// Created by fxd on 22-9-24.
//

#include "ShapeDecorator.hpp"

using namespace decorator;

int main() {
    std::shared_ptr<Shape> circle = std::make_shared<Circle>();
    std::shared_ptr<ShapeDecorator> redCircle = std::make_shared<RedShapeDecorator>(circle);
//    std::shared_ptr<Shape> redCircle = std::make_shared<RedShapeDecorator>(circle);
    redCircle->draw();
    return 0;
}