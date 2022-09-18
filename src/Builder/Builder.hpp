//
// Created by fxd on 22-9-18.
//

#ifndef DESIGNPATTERNS_NOTES_BUILDER_HPP
#define DESIGNPATTERNS_NOTES_BUILDER_HPP

#include <memory>
#include "Car.hpp"

namespace builder {

/// builder 抽象类，用于定义接口
class CarBuilder {
public:
    virtual void buildEngine(const std::string& engine) {}
    virtual void buildBody(const std::string& body) {}
    virtual void buildWheel(const std::string& wheel) {}
    virtual std::shared_ptr<Car> getCar() { return nullptr; }

protected:
    CarBuilder() = default;

};

class SportCarBuilder: public CarBuilder{
public:
    SportCarBuilder() : car_(new Car()) {}
    void buildBody(const std::string &body) override {
        car_->setBody(body);
    }
    void buildEngine(const std::string &engine) override {
        car_->setEngine(engine);
    }
    void buildWheel(const std::string &wheel) override {
        car_->setWheel(wheel);
    }
    std::shared_ptr<Car> getCar() override {
        return car_;
    }

private:
    std::shared_ptr<Car> car_;
};

}


#endif //DESIGNPATTERNS_NOTES_BUILDER_HPP
