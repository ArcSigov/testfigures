#ifndef POLYGON_H
#define POLYGON_H

#include "figure.h"

class tPolygon : public Figure
{
public:
    tPolygon(const Color& color = Color::white);
    void draw() override;
};

#endif // POLYGON_H
