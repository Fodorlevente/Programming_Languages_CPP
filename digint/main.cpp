#include <iostream>
#include "digraph.h"
#include <list>

int main()
{
    Digraph<std::list<int>,int> digint;
    digint.push(2);
    digint.push(1);
    digint.push(3);
    digint.push(0);
    digint.push(4);
    digint.print();

    std::cout<<"length of digint is: " << (int)digint.length();

    std::cout<<"\nDigraph object copying:\n";
    std::list<int> lint = digint.enter();
    for(std::list<int>::iterator it = lint.begin();it != lint.end(); ++it){
        std::cout<<*it;
        std::cout<<"\n";
    }

    lint.sort();
    std::cout<<"\nlist sorted:\n";
    for(std::list<int>::iterator it = lint.begin();it != lint.end(); ++it){
        std::cout<<*it;
        std::cout<<"\n";
    }


}
