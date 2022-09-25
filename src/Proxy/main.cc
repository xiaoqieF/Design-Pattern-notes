//
// Created by fxd on 22-9-25.
//
#include "OrangeServiceProxy.hpp"
using namespace proxy;

int main() {
    std::shared_ptr<GoodService> service = std::make_shared<OrangeServiceProxy>();
    service->addGood();
    service->delGood();
}
