#include "lineedit.h"
#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <vector>

const int max = 1000;

int main() {
    int your_mark = 1;

    line_editor<std::vector<int>, int> lev;
    for (int i = 0; i < max; ++i) {
        lev.press(i);
        lev.home();
        lev.press(i);
    }
    std::vector<int> v = lev.enter();
    line_editor<std::list<double>, double> lel;
    lel.press(4.8);
    lel.home();
    lel.press(1.1);
    std::list<double> c = lel.enter();
    line_editor<std::string, char> les;
    les.press('W');
    les.press('o');
    les.press('r');
    les.press('l');
    les.press('d');
    les.home();
    les.press('H');
    les.press('e');
    les.press('l');
    les.press('l');
    les.press('o');
    std::string s = les.enter();
    if ("HelloWorld" == s && "" == les.enter() && 2.2 > *(c.begin()) &&
        2 * max == v.size() && max - 1 == v[0]) {
            your_mark = c.size();
    }
std::cout << "Your mark is " << your_mark;
std::endl(std::cout);
}
