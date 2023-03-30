#include "viewer.h"

View::View(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
}

/*!
Выполняет создание окна для отрисовки
\param h - высота
\param w - ширина
\param title - имя окна
*/
void View::createWindow(const int& h, const int& w,const std::string& title)
{
    glutInitWindowPosition(100,100);
    glutInitWindowSize(w,h);
    glutCreateWindow(title.c_str());
    windowcreated = true;
}

/*!
Устанавливает функцию для отрисовки даннных в окне
\param callback - функция отрисовки в окне
*/
void View::setDisplayFunc(void (* callback)( void ))
{
    glutDisplayFunc(callback? callback: emptyDisplayFunc);
}

/*!
Пустая функция отрисовки в окне, если не была установлена пользовательская
*/
void View::emptyDisplayFunc()
{

}

/*!
Запускает основной цикл отрисовки данных в окне
*/
void View::run()
{
    if (windowcreated)
        glutMainLoop();
}

/*!
Выполняет команду на смену буфера отрисовки
*/
void View::nextBuf()
{
    if (windowcreated)
        glutSwapBuffers();
}
