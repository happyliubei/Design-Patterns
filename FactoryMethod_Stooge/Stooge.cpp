#include <iostream>
#include "Stooge.h"

using namespace std;

Stooge *Stooge::make_stooge(int choice)
{
  if (choice == 1)
    return new Larry;
  else if (choice == 2)
    return new Moe;
  else
    return new Curly;
}

void Larry::slap_stick()
{

    cout << "Larry: poke eyes\n";

}

void Moe::slap_stick()
{
    cout << "Moe: slap head\n";
}

void Curly::slap_stick()
{
    cout << "Curly: suffer abuse\n";
}
