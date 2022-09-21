//
// Created by fxd on 22-9-20.
//
#include "Print.hpp"

using namespace adapter;

int main() {
    std::shared_ptr<Print> banPrinter = std::make_shared<BannerAdapter>("Hello");
    banPrinter->printStrong();
    banPrinter->printWeak();
}