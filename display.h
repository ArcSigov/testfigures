#ifndef DISPLAY_H
#define DISPLAY_H


#include "figure.h"
#include <vector>
#include <memory>
#include "colors.h"
#include "viewer.h"

class Display : public View
{
public:
    Display(int argc, char **argv,int h =400,int w=400, const std::string& title = "Test");
    void show() override;
    void addFigure(Figure *);
    void setBackgroundColor(const Color&);
private:   
    std::vector<Figure*> figures;
    static void scene();
};

#endif // DISPLAY_H
