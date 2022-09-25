//
// Created by fxd on 22-9-25.
//

#ifndef DESIGNPATTERNS_NOTES_SHAPEFACTORY_HPP
#define DESIGNPATTERNS_NOTES_SHAPEFACTORY_HPP
#include <unordered_map>
#include <memory>
#include "Shape.hpp"

namespace flyweight {
    class ShapeFactory {
    public:
        typedef std::shared_ptr<Circle> CirclePtr;
        static CirclePtr getCircle(const std::string& color) {
            auto it = circleMap_.find(color);
            if (it == circleMap_.end()) {
                circleMap_[color] = std::make_shared<Circle>(color);
                std::cout << "create circle of color:" << color << std::endl;
            }
            return circleMap_[color];
        }
    private:
        static std::unordered_map<std::string, CirclePtr> circleMap_;
    };
    std::unordered_map<std::string, ShapeFactory::CirclePtr> ShapeFactory::circleMap_;
}
#endif //DESIGNPATTERNS_NOTES_SHAPEFACTORY_HPP
