#include "figure.h"

Figure::Figure(const Color& _color): color(_color)
{

}

/*!
��������� ��������� �������������� ������� ������ �� ���������
\param _x - ���������� �� ��� �
\param _� - ���������� �� ��� Y
*/
void Figure::setPosition(GLfloat _x, GLfloat _y)
{
    x = _x;
    y = _y;
}


/*!
��������� ��������� ����� ������, ����������� ��� ��������������� �������
\param ���
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
