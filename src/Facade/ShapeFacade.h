//
// Created by fxd on 22-9-24.
//

#ifndef DESIGNPATTERNS_NOTES_SHAPEFACADE_H
#define DESIGNPATTERNS_NOTES_SHAPEFACADE_H
#include <memory>
#include "Shape.hpp"

namespace facade {
    class ShapeFacade {
    public:
        ShapeFacade() : circle_(new Circle), rectangle_(new Rectangle), square_(new Square) {}
        void drawCircle() {
            circle_->draw();
        }
        void drawRectangle() {
            rectangle_->draw();
        }
        void drawSquare() {
            square_->draw();
        }

    private:
        std::shared_ptr<Shape> circle_;
        std::shared_ptr<Shape> rectangle_;
        std::shared_ptr<Shape> square_;
    };

}
#endif //DESIGNPATTERNS_NOTES_SHAPEFACADE_H
