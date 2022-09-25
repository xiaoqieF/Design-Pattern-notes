//
// Created by fxd on 22-9-25.
//

#ifndef DESIGNPATTERNS_NOTES_SHAPE_HPP
#define DESIGNPATTERNS_NOTES_SHAPE_HPP
#include <string>
#include <iostream>

namespace flyweight {
    class Shape{
    public:
        virtual ~Shape() = default;
        virtual void draw() = 0;
    };

    class Circle : public Shape {
    public:
        explicit Circle(std::string color) : color_(std::move(color)) {}
        void setX(int x) { x_ = x; }
        void setY(int y) { y_ = y; }
        void setRadius(int radius) { radius_ = radius; }

        void draw() override {
            std::cout << "[Draw circle] x: " << x_ << ", y: "
                << y_ << ", radius: " << radius_ << ", color: " << color_ << std::endl;
        }
    private:
        int x_ = 0;
        int y_ = 0;
        int radius_ = 10;
        std::string color_;
    };
}
#endif //DESIGNPATTERNS_NOTES_SHAPE_HPP
