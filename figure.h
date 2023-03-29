#ifndef FIGURE_H
#define FIGURE_H


#include <GL/glut.h>
#include <cstdio>

class figure
{
public:
    figure() = default;
    virtual ~figure() = default;
    virtual void draw() = 0;
    void setPosition(GLfloat _x, GLfloat _y);
protected:
    void rotate();
    GLfloat x{0};
    GLfloat y{0};
};

#endif // FIGURE_H
