//
// Created by fxd on 22-9-30.
//

#include "Observer.h"
#include "Subject.hpp"

using namespace observer;

int main() {
    auto subject = std::make_shared<Subject>();
    std::shared_ptr<Observer> dec = std::make_shared<DecObserver>();
    std::shared_ptr<Observer> hex = std::make_shared<HexObserver>();
    std::shared_ptr<Observer> oct = std::make_shared<OctObserver>();
    dec->attachSubject(subject);
    hex->attachSubject(subject);
    oct->attachSubject(subject);
    subject->setState(128);
    return 0;
}