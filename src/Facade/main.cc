//
// Created by fxd on 22-9-24.
//

#include <memory>
#include "ShapeFacade.h"
using namespace facade;

int main() {
    auto facade = std::make_shared<ShapeFacade>();
    facade->drawCircle();
    facade->drawRectangle();
    facade->drawSquare();
    return 0;
}
