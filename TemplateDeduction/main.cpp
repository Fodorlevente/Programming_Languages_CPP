#include <iostream>
#include "deduct.h"

int main()
{
    Deduct<int,int> first(10,20);
    Deduct<int,int> second(5,6);

    first.print();
    second.print();

    if(first == second)
    {
        std::cout<<"Equals!";
    }
    else
    {
        first.decreaseAll();
        first.print();
        first.decreaseBody();
        first.print();

    }
}
