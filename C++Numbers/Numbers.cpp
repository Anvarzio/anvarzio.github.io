#include "Numbers.h"
using namespace std;

void Numbers::print(string word)
{
    cout << word << " ";
}

void Numbers::Thousands()
{
    int i = numbers / 1000;
    if (i > 0)
    {
        print(ones[i]);
        print("Thousand");
    }
}

void Numbers::Hundreds()
{
    int i = (numbers / 100) % 10;
    if (i > 0)
    {
        print(ones[i]);
        print("Hundred");
    }
}

void Numbers::Teens()
{
    int i = numbers % 100;
    if (i >= 10 && i <= 19)
    {
        print(teens[i - 10]);
    }
}

void Numbers::Tens()
{
    int i = numbers % 100;
    if (i >= 20)
    {
        int j = i / 10;
        print(tens[j - 2]);
    }
}

void Numbers::Ones()
{
    int i = numbers % 100;
    int j = i % 10;
    
    if ((i < 10 || i >= 20) && j > 0)
    {
        print(ones[j]);
    }
}

void Numbers::wordConvert()
{
    if (numbers < 0 || numbers > 9999)
        return;

    if (numbers == 0)
    {
        cout << "Zero";
        return;
    }

    Thousands();
    Hundreds();

    int i = numbers % 100;

    if (i >= 10 && i <= 19)
    {
        Teens();
    }
    else
    {
        Tens();
        Ones();
    }

    cout << "\n";
}
