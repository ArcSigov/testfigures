#include "circle.h"
#include <math.h>
tCircle::tCircle(const Color& _color) : Figure(_color)
{

}

/*!
Выполняет отрисовку окружности
\param нет
*/
void tCircle::draw()
{
    glBegin(GL_TRIANGLE_FAN);
    setColor();
    glVertex2f( x, y);
    for(auto i = 0u; i <= 150; i++ ) {
         auto a = (float)i / (float)50 * M_PI * 2.0f;
         glVertex2f( x-cos( a ), y-sin( a ));
     }
    glEnd();
}
