#include "quad.h"

tQuad::tQuad(const Color& color) : Figure(color)
{
    step = 1.f;
}

/*!
Выполняет отрисовку квадрата
\param нет
*/
void tQuad::draw()
{
    glBegin(GL_QUADS);
        setColor();
        glVertex2f(x,y);
        glVertex2f(x,y+1.f);
        glVertex2f(x+step,y+1.f);
        glVertex2f(x+step,y);
    glEnd();
}
