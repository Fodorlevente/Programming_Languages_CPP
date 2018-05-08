#ifndef LINEEDIT_H
#define LINEEDIT_H
#include <list>

template<typename Cont, typename CharT>
class line_editor
{
private:
    std::list<CharT> line;
    typename std::list<CharT>::iterator cursor;

public:
    line_editor(): cursor(line.end()){};
    void home(){
        cursor = line.begin();
    };
    void press(CharT c){
        cursor = line.insert(cursor,c);
        cursor++;
    };
    Cont enter(){
        Cont ret(line.begin(),line.end());
        line.clear();
        cursor = line.end();
        return ret;
    };
};

#endif // LINEEDIT_H
