//
// Created by fxd on 22-9-24.
//

#ifndef DESIGNPATTERNS_NOTES_SHAPEDECORATOR_HPP
#define DESIGNPATTERNS_NOTES_SHAPEDECORATOR_HPP
#include <memory>
#include <iostream>
#include "Shape.hpp"

namespace decorator {
    class ShapeDecorator : public Shape{
    public:
        explicit ShapeDecorator(const std::shared_ptr<Shape>& shape) : shape_(shape) {}
        ~ShapeDecorator() override = default;
        void draw() override {
            shape_->draw();
        }

    protected:
        std::shared_ptr<Shape> shape_;
    };

    class RedShapeDecorator : public ShapeDecorator {
    public:
        explicit RedShapeDecorator(const std::shared_ptr<Shape>& shape) : ShapeDecorator(shape) {}
        void draw() override {
            shape_->draw();
            setRedBorder();
        }

    private:
        void setRedBorder() {
            std::cout << "set red border" << std::endl;
        }
    };
}
#endif //DESIGNPATTERNS_NOTES_SHAPEDECORATOR_HPP
