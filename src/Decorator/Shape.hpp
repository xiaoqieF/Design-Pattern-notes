//
// Created by fxd on 22-9-24.
//

#ifndef DESIGNPATTERNS_NOTES_SHAPE_HPP
#define DESIGNPATTERNS_NOTES_SHAPE_HPP
#include <iostream>

namespace decorator {
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

}
#endif //DESIGNPATTERNS_NOTES_SHAPE_HPP
