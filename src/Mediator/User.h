//
// Created by fxd on 22-9-30.
//

#ifndef DESIGNPATTERNS_NOTES_USER_H
#define DESIGNPATTERNS_NOTES_USER_H
#include <string>
#include <memory>

namespace mediator {
    class ChatRoom;
    class User {
    public:
        explicit User(std::string name, const std::shared_ptr<ChatRoom>& room)
            : name_(std::move(name)), room_(room) {}

        std::string getName() const {
            return name_;
        }

        void sendMsg(const std::string& msg);

    private:
        std::string name_;
        std::weak_ptr<ChatRoom> room_;
    };
}
#endif //DESIGNPATTERNS_NOTES_USER_H
