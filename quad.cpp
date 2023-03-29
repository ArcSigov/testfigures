#include "quad.h"

quad::quad() : figure()
{

}

void quad::draw()
{
    glBegin(GL_QUADS);
        glVertex2f(x,y);
        glVertex2f(x,+1.f);
        glVertex2f(x+1.f,y+1.f);
        glVertex2f(x+1.f,y);
    glEnd();
}
