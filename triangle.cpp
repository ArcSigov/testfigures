#include "triangle.h"

triangle::triangle() : figure()
{

}

void triangle::draw()
{
    glBegin(GL_TRIANGLES);
            glVertex2f(x,y);
            glVertex2f(x,y+1.f);
            glVertex2f(x+1.f,y);
    glEnd();
}
