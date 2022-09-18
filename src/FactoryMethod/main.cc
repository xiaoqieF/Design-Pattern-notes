//
// Created by fxd on 22-9-18.
//

#include "CarFactory.hpp"

using namespace factoryMethod;
using namespace std;

int main() {
    shared_ptr<CarFactory> sportCatFact = make_shared<SportCarFactory>();
    shared_ptr<CarFactory> trainFact = make_shared<TrainFactory>();
    shared_ptr<Car> sportCat = sportCatFact->createCar();
    shared_ptr<Car> train = trainFact->createCar();
    sportCat->use();
    train->use();
    return 0;
}