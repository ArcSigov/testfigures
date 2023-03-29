#include "display.h"
static display* current;
display::display(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(400,400);
    glutCreateWindow("Test");
    glutDisplayFunc(display::scene);

    glClearColor(0.0, 0.0, 0.0, 0.0);
    glViewport(0,0,400,400);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10., 10.);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void display::scene()
{
    GLfloat x = -9.f;
    glClear(GL_COLOR_BUFFER_BIT);
    for (const auto& f: current->figures)
    {
        f->setPosition(x,0);
        f->draw();
        x+=2.f;
    }
    glutSwapBuffers();
}

void display::show()
{
    current = this;
    glutMainLoop();
}

void display::addfigure(figure* figure)
{
    figures.push_back(figure);
}
