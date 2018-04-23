#include <iostream>
#include "vector.h"

int main()
{
    Vector<int> v;
    v.addBack(4);
    v.addBack(5);
    v.addBack(7);
    v.addBack(8);

    v.print();
}
