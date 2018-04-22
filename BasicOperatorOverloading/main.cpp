#include <iostream>
#include "number.h"
#include "number.h"

int main()
{
    //Ctor and Copy Ctor
    Number<int> first(2);
    first.print();
    Number<int> second = first;
    second.print();

    Number<int> third = (first + second);
    third.print();


    second = first * third;
    second.print();


    return 0;
}
