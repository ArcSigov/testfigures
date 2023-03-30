#include "figure.h"

Figure::Figure(const Color& _color): color(_color)
{

}

/*!
Выполняет установку первоначальной позиции фигуры на плоскости
\param _x - координата по оси Х
\param _н - координата по оси Y
*/
void Figure::setPosition(GLfloat _x, GLfloat _y)
{
    x = _x;
    y = _y;
}


/*!
Выполняет установку цвета фигуры, переданного при конструировании объекта
\param нет
*/
void Figure::setColor()
{
    switch (color)
    {

        case Color::black:      glColor3f(0.f, 0.f, 0.f);break;
        case Color::blue:       glColor3f(0.f, 0.f, 1.f);break;
        case Color::red:        glColor3f(1.f, 0.f, 0.f);break;
        case Color::green:      glColor3f(0.f, 1.f, 0.f);break;
        case Color::yellow:     glColor3f(1.0f, 1.0f, 0.0f);break;
        case Color::purple:     glColor3f(1.0f, 0.0f, 1.0f);break;
        case Color::white:
        default:
              glColor3f(1.f, 1.f, 1.f);
        break;
    }
}
