#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>
#include <string>
using namespace std;

class Numbers
{
private:
    int numbers;

public:
    string ones[10]  = {"", "One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    string teens[10] = {"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen",
                        "Sixteen","Seventeen","Eighteen","Nineteen"};
    string tens[8]   = {"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

    Numbers(int input)
    {
        numbers = input;
        wordConvert();
    }

    void wordConvert();
    
    void print(string);

    void Thousands();
    
    void Hundreds();
    
    void Tens();
    
    void Teens();
    
    void Ones();
};

#endif
