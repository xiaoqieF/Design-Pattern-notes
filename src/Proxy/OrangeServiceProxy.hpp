//
// Created by fxd on 22-9-25.
//

#ifndef DESIGNPATTERNS_NOTES_ORANGESERVICEPROXY_HPP
#define DESIGNPATTERNS_NOTES_ORANGESERVICEPROXY_HPP
#include <memory>
#include "GoodService.hpp"
namespace proxy {
    // proxy of OrangeService
    class OrangeServiceProxy : public GoodService {
    public:
        OrangeServiceProxy() : orangeService_(new OrangeService) {}
        void addGood() override {
            log("before addGood");
            orangeService_->addGood();
        }
        void delGood() override {
            log("before delGood");
            orangeService_->delGood();
        }
    private:
        static void log(const std::string& str) {
            std::cout << str << std::endl;
        }
        std::shared_ptr<OrangeService> orangeService_;
    };
}
#endif //DESIGNPATTERNS_NOTES_ORANGESERVICEPROXY_HPP
