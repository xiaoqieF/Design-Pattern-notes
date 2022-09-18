//
// Created by fxd on 22-9-18.
//

#ifndef DESIGNPATTERNS_NOTES_CAR_HPP
#define DESIGNPATTERNS_NOTES_CAR_HPP
#include <string>
#include <memory>
#include <utility>
#include <iostream>

namespace factoryMethod {
class Car {
public:
    Car(std::string name, std::string color) : name_(std::move(name)), color_(std::move(color)) {}
    virtual void use() = 0;

protected:
    std::string name_;
    std::string color_;
};

class SportCar : public Car {
public:
    SportCar(std::string name, std::string color) : Car(std::move(name), std::move(color)) {}
    void use() override {
        std::cout << "sportCar{" + name_ + "--" + color_ + "} is used" << std::endl;
    }
};

class Train : public Car {
public:
    Train(std::string name, std::string color) : Car(std::move(name), std::move(color)) {}
    void use() override {
        std::cout << "train{" + name_ + "--" + color_ + "} is used" << std::endl;
    }
};
}
#endif //DESIGNPATTERNS_NOTES_CAR_HPP
