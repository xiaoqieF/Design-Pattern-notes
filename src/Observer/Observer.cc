//
// Created by fxd on 22-9-30.
//
#include <iostream>
#include <iomanip>
#include <utility>

#include "Observer.h"
#include "Subject.hpp"

namespace observer {

    void Observer::attachSubject(const std::shared_ptr<Subject>& subject) {
        subject_ = subject;
        subject_->attach(shared_from_this());
    }

    void DecObserver::update() {
        std::cout << "Dec observe:" << std::dec << subject_->getState() << std::endl;
    }
    void OctObserver::update() {
        std::cout << "Oct observe:" << std::oct << subject_->getState() << std::endl;
    }
    void HexObserver::update() {
        std::cout << "Hex observe:" << std::hex << subject_->getState() << std::endl;
    }

}