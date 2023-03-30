#ifndef VIEWER_H
#define VIEWER_H

#include <GL/glut.h>
#include <string>

class View
{
public:
    View(int argc, char **argv);
    virtual ~View() = default;
    virtual void show() = 0;
protected:
    void createWindow(const int &h, const int &w, const std::string& title = "Window");
    void setDisplayFunc(void (* callback)( void ));
    void run();
    void nextBuf();
private:
    static void emptyDisplayFunc();
    bool windowcreated{false};

};

#endif // VIEWER_H
