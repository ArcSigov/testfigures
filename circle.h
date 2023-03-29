#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

class circle: public figure
{
public:
    circle();
    ~circle() = default;
    void draw() override;
};

#endif // CIRCLE_H
