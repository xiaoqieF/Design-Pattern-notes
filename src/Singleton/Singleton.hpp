//
// Created by fxd on 22-9-18.
//

#ifndef DESIGNPATTERNS_NOTES_SINGLETON_HPP
#define DESIGNPATTERNS_NOTES_SINGLETON_HPP
#include <memory>
#include <iostream>

namespace singleton {
    class Singleton {
    public:
        static std::shared_ptr<Singleton> getInstance() {
            if (!instance_) {
                instance_ = std::shared_ptr<Singleton>(new Singleton);
            }
            return instance_;
        }
        void useInstance() {
            std::cout << "use instance" << std::endl;
        }
    private:
        Singleton() = default;
        static std::shared_ptr<Singleton> instance_;
    };
    std::shared_ptr<Singleton> Singleton::instance_ = nullptr;
}
#endif //DESIGNPATTERNS_NOTES_SINGLETON_HPP
