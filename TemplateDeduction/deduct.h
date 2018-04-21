#define DEDUCT_H
#ifndef DEDUCT_H_

template<typename Cont, typename T>
class Deduct
{
private:
    Cont head;
    T body;
public:
    Deduct(Cont _head, T _body)
    {
        this -> head = _head;
        this -> body = _body;
    }
    bool operator ==(Deduct &other)
    {
        return head == other.head && body == other.body;
    }
    Deduct& operator +(Deduct &other)
    {
        this ->head = this -> head + other.head;
        this ->body = this -> body + other.body;
    }
    Deduct& operator -(Deduct &other)
    {
        this ->head = this -> head - other.head;
        this ->body = this -> body - other.body;
    }
    void decreaseAll()
    {
        this -> head = this -> head - 1;
        this ->body = this -> body - 1;
    }
    void decreaseHead()
    {
        this -> head = this -> head - 1;
    }
    void decreaseBody()
    {
        this ->body = this -> body - 1;
    }
    Cont getHead()
    {
        return this -> head;
    }
    T getBody()
    {
        return this -> body;
    }
    void print()
    {
        std::cout << "Head: " << this->getHead();
        std::cout << std::endl;
        std::cout << "Body: " << this->getBody();
        std::cout << std::endl;
    }

};

#endif // DEDUCT_H
