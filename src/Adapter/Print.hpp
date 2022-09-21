//
// Created by fxd on 22-9-20.
//

#ifndef DESIGNPATTERNS_NOTES_PRINT_HPP
#define DESIGNPATTERNS_NOTES_PRINT_HPP
#include <memory>
#include "Banner.hpp"

namespace adapter {
    // define output interface
    class Print {
    public:
        virtual void printWeak() = 0;
        virtual void printStrong() = 0;
        virtual ~Print() = default;
    };

    // As adapter of banner, make banner adapt to "Print interface"
    class BannerAdapter : public Print {
    public:
        explicit BannerAdapter(std::string content) : banner_(new Banner(std::move(content))){}
        void printStrong() override {
            banner_->showWithParen();
        }
        void printWeak() override {
            banner_->showWithAster();
        }
    private:
        std::shared_ptr<Banner> banner_;
    };
}

#endif //DESIGNPATTERNS_NOTES_PRINT_HPP
