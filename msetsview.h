#ifndef m_sets_view_h
#define m_sets_view_h

template<typename type, typename type2>
class multisets_predicate_view{

    public:

    multisets_predicate_view(std::multiset<type> &setA, std::multiset<type> &setB, bool (*function) (type) ){
        std::multiset<type> resultA;
        std::multiset<type> resultB;
        for (std::multiset<type>::const_iterator i(setA.begin()), end(setA.end()); i != end; ++i){
            if(function(*i)){
                resultA.insert(*i);
            }
            else {
                resultB.insert(*i);
            }
        }
        for (std::multiset<type>::const_iterator i(setB.begin()), end(setB.end()); i != end; ++i){
            if(function(*i)){
                resultA.insert(*i);
            }
            else {
                resultB.insert(*i);
            }
        }
        setA = resultA;
        setB = resultB;
    }

    void operator()(std::multiset<type> &setA, std::multiset<type> &setB, bool (*function) (type) ){
        std::multiset<type> resultA;
        std::multiset<type> resultB;
        for (std::multiset<type>::const_iterator i(setA.begin()), end(setA.end()); i != end; ++i){
            if(function(*i)){
                resultA.insert(*i);
            }
            else {
                resultB.insert(*i);
            }
        }
        for (std::multiset<type>::const_iterator i(setB.begin()), end(setB.end()); i != end; ++i){
            if(function(*i)){
                resultA.insert(*i);
            }
            else {
                resultB.insert(*i);
            }
        }
        setA = resultA;
        setB = resultB;
    }
    //nem működik de valami ilyesminek kéne lennie, nem tudom hogy az milyen metódushívás amit ott produkálnak....
};


#endif