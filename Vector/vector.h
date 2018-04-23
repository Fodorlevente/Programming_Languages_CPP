#ifndef vector_h
#define vector_h
#include <vector>

template<typename Cont>
class Vector
{
private:
    std::vector<Cont> container;
public:
    //Default Constructor is enough

    void addBack(Cont element)
    {
        container.push_back(element);
    }
    void deleteFrom(int n)
    {
        container.erease(0,n);
    }
    void print()
    {   //Better with iterators
        for(int i = 0; i< container.size(); i++)
        {
            std::cout<< container[i] << " ";
        }
    }

};

#endif // vector_h
