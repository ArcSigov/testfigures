#ifndef QUAD_H
#define QUAD_H

#include "figure.h"

class tQuad : public Figure
{
public:
    tQuad(const Color& color = Color::white);
    void draw() override;
protected:
    GLfloat step;
};

#endif // QUAD_H
