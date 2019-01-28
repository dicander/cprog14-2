#include <iostream>

struct widget {
    const int i = 42;
    void do_not_change() const { i = 13;}
    void change() {}
};

int main() {
    widget w;
    w.do_not_change();
    w.change();
}


