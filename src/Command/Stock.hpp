//
// Created by fxd on 22-9-29.
//

#ifndef DESIGNPATTERNS_NOTES_STOCK_HPP
#define DESIGNPATTERNS_NOTES_STOCK_HPP
#include <string>
#include <iostream>

namespace command {
    class Stock {
    public:
        void buy() {
            std::cout << "buy stock:" << name_ << std::endl;
        }
        void sell() {
            std::cout << "sell stock:" << name_ << std::endl;
        }
    private:
        std::string name_ = "ABC";
    };
}
#endif //DESIGNPATTERNS_NOTES_STOCK_HPP
