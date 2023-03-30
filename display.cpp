#include "display.h"
static Display* current;

Display::Display(int argc, char **argv, int h, int w, const std::string& title) : View(argc,argv)
{
    createWindow(h,w,title);
    setDisplayFunc(Display::scene);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10., 10.);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}


/*!
Выполняет отрисовку загруженных в область окна фигур
\param нет
*/
void Display::scene()
{
    GLfloat x = -9.f;
    glClear(GL_COLOR_BUFFER_BIT);
    for (const auto& f: current->figures)
    {
        f->setPosition(x,0);
        f->draw();
        x+=4.f;
    }
    current->nextBuf();
}


/*!
Выполняет отображение окна
\param нет
*/
void Display::show()
{
    current = this;
    run();
}

/*!
Выполняет добавление фигуры для отрисовки на экране
\param figure* - указатель на вновь добавляемую фигуру
*/
void Display::addFigure(Figure* figure)
{
    figures.push_back(figure);
}


/*!
Выполняет заливку фона окна
\param color - заданный цвет заливки
*/
void Display::setBackgroundColor(const Color& color)
{
    switch (color)
    {
        case Color::white:      glClearColor(1.f, 1.f, 1.f, 1.f);break;
        case Color::black:      glClearColor(0.f, 0.f, 0.f, 0.f);break;
        case Color::blue:       glClearColor(0.f, 0.f, 1.f, 0.f);break;
        case Color::red:        glClearColor(1.f, 0.f, 0.f, 0.f);break;
        case Color::green:      glClearColor(0.f, 1.f, 0.f, 0.f);break;
        case Color::purple:     glClearColor(0.f, 0.f, 0.f, 0.f);break;
        default:break;
    }
}
