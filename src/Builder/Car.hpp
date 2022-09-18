//
// Created by fxd on 22-9-18.
//

#ifndef DESIGNPATTERNS_NOTES_CAR_HPP
#define DESIGNPATTERNS_NOTES_CAR_HPP
#include <string>

namespace builder {
class Car {
public:
    void setEngine(const std::string& engine) { engine_ = engine; }
    void setBody(const std::string& body) { body_ = body; }
    void setWheel(const std::string& wheel) { wheel_ = wheel; }

    std::string toString() {
        return "engine:" + engine_ + "; body:" + body_ + "; wheel:" + wheel_;
    }

private:
    std::string engine_;
    std::string body_;
    std::string wheel_;
};

}


#endif //DESIGNPATTERNS_NOTES_CAR_HPP
