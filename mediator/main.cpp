#include <iostream>
#include "mediator.h"
using namespace std;


int main()
{
  FileSelectionDialog fileDialog;
  int i;

  cout << "Exit[0], Filter[1], Dir[2], File[3], Selection[4]: ";
  cin >> i;

  while (i)
  {
    fileDialog.handleEvent(i - 1);
    cout << "Exit[0], Filter[1], Dir[2], File[3], Selection[4]: ";
    cin >> i;
  }
}


