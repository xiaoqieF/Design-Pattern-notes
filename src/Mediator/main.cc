//
// Created by fxd on 22-9-30.
//

#include "User.h"
#include "ChatRoom.hpp"

using namespace mediator;

int main() {
    auto chatRoom = std::make_shared<ChatRoom>();
    auto mike = std::make_shared<User>("mike", chatRoom);
    auto bob = std::make_shared<User>("bob", chatRoom);
    chatRoom->registerUser(mike, mike->getName());
    chatRoom->registerUser(bob, bob->getName());
    mike->sendMsg("hello");
    bob->sendMsg("world");
    return 0;
}