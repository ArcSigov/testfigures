#ifndef FIGURE_H
#define FIGURE_H

#include <GL/glut.h>
#include "colors.h"
#include <cstdio>


class Figure
{
public:
    Figure(const Color& _color = Color::white);
    virtual ~Figure() = default;
    virtual void draw() = 0;
    void setPosition(GLfloat _x, GLfloat _y);
    void setColor(const Color&);    
protected:
    GLfloat x{0};
    GLfloat y{0};
    Color color;
    void setColor();
};

#endif // FIGURE_H
