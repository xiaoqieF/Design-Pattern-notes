//
// Created by fxd on 22-9-29.
//

#ifndef DESIGNPATTERNS_NOTES_COMMAND_HPP
#define DESIGNPATTERNS_NOTES_COMMAND_HPP
#include <memory>
#include <utility>
#include "Stock.hpp"

namespace command {
    class Command {
    public:
        virtual ~Command() = default;
        virtual void execute() = 0;
    };

    class SellCommand : public Command{
    public:
        explicit SellCommand(std::shared_ptr<Stock> stock) : stock_(std::move(stock)) {}
        void execute() override {
            stock_->sell();
        }
    private:
        std::shared_ptr<Stock> stock_;   // receiver
    };

    class BuyCommand : public Command {
    public:
        explicit BuyCommand(std::shared_ptr<Stock> stock) : stock_(std::move(stock)) {}
        void execute() override {
            stock_->buy();
        }
    private:
        std::shared_ptr<Stock> stock_;
    };
}
#endif //DESIGNPATTERNS_NOTES_COMMAND_HPP
