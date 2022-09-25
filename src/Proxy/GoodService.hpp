//
// Created by fxd on 22-9-25.
//

#ifndef DESIGNPATTERNS_NOTES_GOODSERVICE_HPP
#define DESIGNPATTERNS_NOTES_GOODSERVICE_HPP
#include <iostream>

namespace proxy {
    class GoodService {
    public:
        virtual ~GoodService() = default;
        virtual void addGood() = 0;
        virtual void delGood() = 0;
    };

    class OrangeService : public GoodService {
    public:
        void addGood() override {
            std::cout << "add good" << std::endl;
        }
        void delGood() override {
            std::cout << "del good" << std::endl;
        }
    };

}
#endif //DESIGNPATTERNS_NOTES_GOODSERVICE_HPP
