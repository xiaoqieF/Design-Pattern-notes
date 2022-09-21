//
// Created by fxd on 22-9-20.
//

#ifndef DESIGNPATTERNS_NOTES_BANNER_HPP
#define DESIGNPATTERNS_NOTES_BANNER_HPP
#include <string>
#include <iostream>

namespace adapter {
    class Banner {
    public:
        explicit Banner(std::string content) : content_(std::move(content)){}
        void showWithParen() {
            std::cout << "(" << content_ << ")" << std::endl;
        }
        void showWithAster() {
            std::cout << "*" << content_ << "*" << std::endl;
        }
    private:
        std::string content_;
    };
}
#endif //DESIGNPATTERNS_NOTES_BANNER_HPP
