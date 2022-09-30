//
// Created by fxd on 22-9-30.
//

#include "User.h"
#include "ChatRoom.hpp"

namespace mediator {

    void User::sendMsg(const std::string &msg) {
        auto roomPtr = room_.lock();
        if (roomPtr) {
            roomPtr->sendMsg(name_, msg);
        }

    }
}