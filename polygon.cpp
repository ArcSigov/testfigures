#include "polygon.h"

tPolygon::tPolygon(const Color& color) : Figure(color)
{

}

/*!
Выполняет отрисовку многоугольника
\param нет
*/
void tPolygon::draw()
{
    glBegin(GL_POLYGON);
        setColor();
        glVertex2f(x,y);
        glVertex2f(x+0.5f,y+1.f);
        glVertex2f(x+1.5f,y+1.f);
        glVertex2f(x+2.f,y);
        glVertex2f(x+1.5f,y-1.f);
        glVertex2f(x+0.5f,y-1.f);
    glEnd();
}
