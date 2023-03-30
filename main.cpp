#include <iostream>
#include "display.h"
#include "circle.h"
#include "quad.h"
#include "rectangle.h"
#include "triangle.h"
#include "polygon.h"


int main(int argc, char **argv)
{

    std::unique_ptr<View> view = std::make_unique<Display>(argc,argv,500,500,"TestLesson");
    std::vector<std::unique_ptr<Figure>> figures;
    figures.emplace_back(new tCircle(Color::red));
    figures.emplace_back(new tQuad(Color::green));
    figures.emplace_back(new tTriangle(Color::blue));
    figures.emplace_back(new tRectangle(Color::purple));
    figures.emplace_back(new tPolygon(Color::yellow));


    static_cast<Display*>(view.get())->setBackgroundColor(Color::black);
    for (const auto& figure: figures)
        static_cast<Display*>(view.get())->addFigure(figure.get());

    view->show();
    return 0;
}
