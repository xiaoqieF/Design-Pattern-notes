//
// Created by fxd on 22-9-18.
//

#ifndef DESIGNPATTERNS_NOTES_CARFACTORY_HPP
#define DESIGNPATTERNS_NOTES_CARFACTORY_HPP
#include <memory>
#include "Car.hpp"

namespace factoryMethod {
    class CarFactory{
    public:
        virtual std::shared_ptr<Car> createCar() = 0;
        virtual ~CarFactory() = default;
    };

    class SportCarFactory : public CarFactory {
    public:
        std::shared_ptr<Car> createCar() override {
            return std::make_shared<SportCar>("Farari", "red");
        }
    };

    class TrainFactory: public CarFactory {
    public:
        std::shared_ptr<Car> createCar() override {
            return std::make_shared<Train>("FuXing", "yellow");
        }
    };
}
#endif //DESIGNPATTERNS_NOTES_CARFACTORY_HPP
