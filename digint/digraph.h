#ifndef DIRGAPH_H
#define DIGRAPH_H
#include <list>

template<typename Cont,typename CharT>
class Digraph
{
private:
    std::list<CharT> line;
    typename std::list<CharT>::iterator it;
public:
    Digraph(){
        it = line.end();
    }
    void setToFirst(){
        it = line.begin();
    };
    void setToLast(){
        it = line.end();
    };
    void push(CharT c){
        it = line.insert(it,c);
        it++;
    }
    Cont enter(){
        Cont ret(line.begin(),line.end());
        line.clear();
        it = line.end();
        return ret;
    }
    void print(){
        for(it=line.begin();it!=line.end();++it){
            std::cout<<*it;
            std::cout<<"\n";
        }
    }
    int length(){
        int ret = 0;
        for(it=line.begin();it!=line.end();++it){
            ret+=1;
        }
        return ret;
    }

};

#endif // DIRGAPH_H
