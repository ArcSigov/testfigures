#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class tTriangle : public Figure
{
public:
    tTriangle(const Color& color = Color::white);
    void draw() override;
};

#endif // TRIANGLE_H
