//
// Created by fxd on 22-9-29.
//

#ifndef DESIGNPATTERNS_NOTES_INVOKER_HPP
#define DESIGNPATTERNS_NOTES_INVOKER_HPP
#include <vector>
#include "Command.hpp"

namespace command {
    class Invoker {
    public:
        void addCommand(const std::shared_ptr<Command>& command) {
            commandList_.push_back(command);
        }
        void invoke() {
            for (auto& c : commandList_) {
                c->execute();
            }
        }
    private:
        std::vector<std::shared_ptr<Command>> commandList_;
    };
}
#endif //DESIGNPATTERNS_NOTES_INVOKER_HPP
