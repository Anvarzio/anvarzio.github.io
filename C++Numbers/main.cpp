//Anthony Varela-Alvarez
//Numbers class

#include <iostream>
#include "Numbers.h"
using namespace std;

int main()
{
    int inumbers = 0;
    cout << "Enter any number from 0 - 9999, and I will spell it out!\n\nOr, enter -1 to quit.\n\n";

    while (true)
    {
        cout << "Enter a number: ";
        cin >> inumbers;

        if (inumbers == -1)
        {
            cout << "\nClosed.\n";
            break;
        }

        Numbers instance(inumbers);
        cout << endl;
    }

    return 0;
}
