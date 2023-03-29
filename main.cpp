#include <iostream>
#include "display.h"
#include "circle.h"
#include "quad.h"
#include "triangle.h"
using namespace std;

int main(int argc, char **argv)
{
    display d(argc,argv);
    figure* _circle   = new circle;
    figure* _quad     = new quad;
    figure* _triangle = new triangle;

    d.addfigure(_circle);
    d.addfigure(_quad);
    d.addfigure(_triangle);
    d.show();
    return 0;
}
