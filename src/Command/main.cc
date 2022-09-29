//
// Created by fxd on 22-9-29.
//
#include "Invoker.hpp"
#include "Stock.hpp"

using namespace command;

int main() {
    auto stock = std::make_shared<Stock>();
    std::shared_ptr<Command> buyCommand = std::make_shared<BuyCommand>(stock);
    std::shared_ptr<Command> sellCommand = std::make_shared<SellCommand>(stock);
    auto invoker = std::make_shared<Invoker>();
    invoker->addCommand(buyCommand);
    invoker->addCommand(sellCommand);
    invoker->invoke();
    return 0;
}