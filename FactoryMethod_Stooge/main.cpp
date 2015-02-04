#include <iostream>
#include <vector>
#include "Stooge.h"

using namespace std;

int main()
{
    vector<Stooge*> roles;
    int choice;
    while (true)
    {
        cout << "Larry(1) Moe(2) Curly(3) Go(0): ";
        cin >> choice;

        if (choice == 0)
          break;
        roles.push_back(Stooge::make_stooge(choice));
    }

    for (int i = 0; i < roles.size(); i++)
        roles[i]->slap_stick();

    for (int i = 0; i < roles.size(); i++)
        delete roles[i];

    return 0;
}

