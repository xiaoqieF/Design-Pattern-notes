//
// Created by fxd on 22-9-21.
//

#ifndef DESIGNPATTERNS_NOTES_SHAPE_HPP
#define DESIGNPATTERNS_NOTES_SHAPE_HPP
#include <memory>
#include "Color.hpp"

namespace bridge {
    class Shape {
    public:
        explicit Shape(const std::shared_ptr<Color>& color) : color_(color) {}
        virtual ~Shape() = default;

        void setColor(const std::shared_ptr<Color>& color) {
            color_ = color;
        }
        virtual void draw() = 0;

    protected:
        std::shared_ptr<Color> color_;    // handle interface Color to get its methods
    };

    class Circle : public Shape {
    public:
        explicit Circle(const std::shared_ptr<Color>& color) : Shape(color) {}
        void draw() override {
            color_->drawWithColor("circle");
        }
    };

    class Triangle : public Shape {
    public:
        explicit Triangle(const std::shared_ptr<Color>& color) : Shape(color) {}
        void draw() override {
            color_->drawWithColor("triangle");
        }
    };
}
#endif //DESIGNPATTERNS_NOTES_SHAPE_HPP
