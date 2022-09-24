//
// Created by fxd on 22-9-21.
//

#ifndef DESIGNPATTERNS_NOTES_COLOR_HPP
#define DESIGNPATTERNS_NOTES_COLOR_HPP
#include <string>
#include <iostream>

namespace bridge {
    class Color {
    public:
        virtual ~Color() = default;
        virtual void drawWithColor(const std::string& str) = 0;
    };

    class Red : public Color {
    public:
        void drawWithColor(const std::string &str) override {
            std::cout << "draw:" << str << " with red color" << std::endl;
        }
    };

    class Green : public Color {
    public:
        void drawWithColor(const std::string &str) override {
            std::cout << "draw:" << str << " with green color" << std::endl;
        }
    };
}

#endif //DESIGNPATTERNS_NOTES_COLOR_HPP
