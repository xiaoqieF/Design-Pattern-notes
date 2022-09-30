//
// Created by fxd on 22-9-30.
//

#ifndef DESIGNPATTERNS_NOTES_CHATROOM_HPP
#define DESIGNPATTERNS_NOTES_CHATROOM_HPP
#include <map>
#include <iostream>
#include "User.h"

namespace mediator {
    class ChatRoom {
    public:
        ChatRoom() = default;
        bool registerUser(const std::shared_ptr<User>& user, const std::string& name) {
            if (users_.find(name) == users_.end()) {
                users_.insert({name, user});
                return true;
            } else {
                return false;
            }
        }
        void sendMsg(const std::string& name, const std::string& msg) {
            auto it = users_.find(name);
            if (it != users_.end()) {
                std::cout << name << " send: " << msg << std::endl;
            }
        }
    private:
        std::map<std::string, std::shared_ptr<User>> users_;
    };
}
#endif //DESIGNPATTERNS_NOTES_CHATROOM_HPP
