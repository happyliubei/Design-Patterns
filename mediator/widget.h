#ifndef WIDGET_H
#define WIDGET_H
#include <iostream>
using namespace std;

class FileSelectionDialog;

class Widget
{
  public:
    Widget(FileSelectionDialog *mediator, char *name);
    virtual void changed();
    virtual void updateWidget() = 0;
    virtual void queryWidget() = 0;
  protected:
    char _name[20];
  private:
    FileSelectionDialog *_mediator;
};

class List: public Widget
{
  public:
    List(FileSelectionDialog *dir, char *name): Widget(dir, name){}
    void queryWidget();
    void updateWidget();
};

class Edit: public Widget
{
  public:
    Edit(FileSelectionDialog *dir, char *name): Widget(dir, name){}
    void queryWidget();
    void updateWidget();
};



#endif // WIDGET_H
