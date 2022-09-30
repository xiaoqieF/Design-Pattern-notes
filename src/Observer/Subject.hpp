//
// Created by fxd on 22-9-30.
//

#ifndef DESIGNPATTERNS_NOTES_SUBJECT_H
#define DESIGNPATTERNS_NOTES_SUBJECT_H
#include <memory>
#include <vector>

#include "Observer.h"

namespace observer {
    class Subject {
    public:
        int getState() const {
            return state_;
        }

        void setState(int state) {
            state_ = state;
            notifyAllObservers();
        }

        void attach(const std::shared_ptr<Observer>& observer) {
            observers_.push_back(observer);
        }

        void notifyAllObservers() {
            for (const auto& o : observers_) {
                auto ptr = o.lock();
                if (ptr) {
                    ptr->update();
                }
            }
        }
    private:
        int state_ = 0;
        std::vector<std::weak_ptr<Observer>> observers_;
    };
}

#endif //DESIGNPATTERNS_NOTES_SUBJECT_H
