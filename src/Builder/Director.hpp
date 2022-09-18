//
// Created by fxd on 22-9-18.
//

#ifndef DESIGNPATTERNS_NOTES_DIRECTOR_HPP
#define DESIGNPATTERNS_NOTES_DIRECTOR_HPP
#include <memory>
#include "Builder.hpp"

namespace builder {
    class Director {
    public:
        explicit Director(const std::shared_ptr<CarBuilder>& builder) { this->builder_ = builder;}
        std::shared_ptr<Car> construct() {
            builder_->buildEngine("goodEngine");
            builder_->buildBody("redBody");
            builder_->buildWheel("4 wheels");
            return builder_->getCar();
        }
    private:
        std::shared_ptr<CarBuilder> builder_;
    };
}

#endif //DESIGNPATTERNS_NOTES_DIRECTOR_HPP
