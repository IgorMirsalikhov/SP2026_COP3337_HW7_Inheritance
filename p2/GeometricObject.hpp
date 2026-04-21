#ifndef GEOMETRIC_OBJECT_H
#define GEOMETRIC_OBJECT_H

#include <string>

class GeometricObject {
public:
    GeometricObject();
    GeometricObject(const std::string& color, bool filled);
    std::string getColor() const;
    bool isFilled() const;

private:
    std::string color;
    bool filled;
}; 

#endif
