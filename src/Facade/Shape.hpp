//
// Created by fxd on 22-9-24.
//

#ifndef DESIGNPATTERNS_NOTES_SHAPE_HPP
#define DESIGNPATTERNS_NOTES_SHAPE_HPP
#include <iostream>

namespace facade {
    class Shape {
    public:
        virtual ~Shape() = default;
        virtual void draw() = 0;
    };

    class Circle : public Shape {
    public:
        void draw() override {
            std::cout << "draw circle" << std::endl;
        }
    };

    class Rectangle : public Shape {
    public:
        void draw() override {
            std::cout << "draw rectangle" << std::endl;
        }
    };

    class Square: public Shape {
    public:
        void draw() override {
            std::cout << "draw square" << std::endl;
        }
    };
}
#endif //DESIGNPATTERNS_NOTES_SHAPE_HPP
