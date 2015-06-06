#include "widget.h"
#include "mediator.h"

void Widget::changed()
{
  _mediator->widgetChanged(this);
}

Widget::Widget(FileSelectionDialog *mediator, char *name)
{
    _mediator = mediator;
    strcpy(_name, name);
}

void List::queryWidget()
{
    cout << "   " << _name << " list queried" << endl;
}
void List::updateWidget()
{
    cout << "   " << _name << " list updated" << endl;
}

void Edit::queryWidget()
{
    cout << "   " << _name << " edit queried" << endl;
}
void Edit::updateWidget()
{
    cout << "   " << _name << " edit updated" << endl;
}
