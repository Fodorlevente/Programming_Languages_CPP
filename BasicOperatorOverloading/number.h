#ifndef number_h
#define number_h

template<typename T>
class Number
{
private:
    T header;
public:
    Number(T _header)   //Ctor
    {
        this ->header = _header;
    }
    Number(const Number &other)     //Copy Ctor
    {
        this -> header = other.header;
    }
    //TODO: == OPERATOR
    Number& operator +(Number &other)
    {
        header = header + other.header;
    }
    Number& operator -(Number &other)
    {
        header = header - other.header;
    }
    Number& operator /(Number &other)
    {
        header = header / other.header;
    }
    Number& operator *(Number &other)
    {
        header = header * other.header;
    }
    void print()
    {
        std::cout<<"The number is: " << header << std::endl;
    }
};

#endif // number_h
