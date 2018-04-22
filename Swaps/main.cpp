#include <iostream>

void swapWrong(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void swapReference(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void swapPointer(int *a, int *b)
{
    int *tmp = a;
    a = b;
    b = tmp;
}

void print(int a, int b)
{
    std::cout<<"Value of a: " << a;
    std::cout<<std::endl;
    std::cout<<"Value of b: " << b;
    std::cout<<std::endl;
}

int main()
{
    int a = 10;
    int b = 20;

    print(a,b);

    std::cout<<"call: swapWrong" << std::endl;
    swapWrong(a,b);
    print(a,b);

    std::cout<<"call: swapReference" << std::endl;
    swapReference(a,b);
    print(a,b);

    std::cout<<"call: swapPointer" << std::endl;
    int *p = &a;
    int *q = &b;
    swapPointer(p,q);
    print(a,b);

    return 0;
}
