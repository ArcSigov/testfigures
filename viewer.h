#ifndef VIEWER_H
#define VIEWER_H

#include <GL/glut.h>
#include <string>

class Viewer
{
public:
    Viewer(int argc, char **argv);
    virtual ~Viewer() = default;
    virtual void show() = 0;
};

#endif // VIEWER_H
