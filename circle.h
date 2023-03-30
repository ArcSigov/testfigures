#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

class tCircle: public Figure
{
public:
    tCircle(const Color& color = Color::white);
    ~tCircle() = default;
    void draw() override;
};

#endif // CIRCLE_H
