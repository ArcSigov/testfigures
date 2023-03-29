#ifndef DISPLAY_H
#define DISPLAY_H

#include <GL/glut.h>
#include "figure.h"
#include <vector>
#include <memory>

class display
{
public:
    display(int argc, char **argv);
    void show();
    void addfigure(figure*);
private:   
    std::vector<figure*> figures;
    static void scene();
    void drawfigures();
};

#endif // DISPLAY_H
