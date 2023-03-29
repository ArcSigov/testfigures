#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class triangle : public figure
{
public:
    triangle();
    void draw() override;
};

#endif // TRIANGLE_H
