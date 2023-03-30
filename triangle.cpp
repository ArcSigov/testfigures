#include "triangle.h"

tTriangle::tTriangle(const Color &color) : Figure(color)
{

}


/*!
Выполняет отрисовку треугольника
\param нет
*/
void tTriangle::draw()
{
    glBegin(GL_TRIANGLES);
            setColor();
            glVertex2f(x,y);
            glVertex2f(x,y+1.f);
            glVertex2f(x+1.f,y);
    glEnd();
}
