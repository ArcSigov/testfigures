#include "circle.h"
#include <math.h>
circle::circle() : figure()
{

}

void circle::draw()
{
    glBegin(GL_TRIANGLE_FAN);

    glVertex2f( x, y);  //центр окружности
    for(auto i = 0u; i <= 150; i++ ) {
         auto a = (float)i / (float)50 * M_PI * 2.0f;
         glVertex2f( x-cos( a ), y-sin( a ));
     }
    glEnd();
}
