#include "GeometricObject.hpp"

GeometricObject::GeometricObject() : color("white"), filled(false) {}

GeometricObject::GeometricObject(const std::string& color, bool filled) {
    this->color = color;
    this->filled = filled;
}

std::string GeometricObject::getColor() const {
    return color;
}

bool GeometricObject::isFilled() const {
    return filled;
}
