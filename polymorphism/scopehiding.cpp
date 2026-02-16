#include <iostream>

using namespace std;

class Top {
public:
    virtual void show(int i) { cout << "Top::show(int) " << i << endl; }
};

class Bottom : public Top {
public:
    // If we want the Top show here we can uncomment the next line
    // using Top::show;
    virtual void show(double f) { cout << "Bottom::show(double) " << f << endl; }
};

int main() {
    Top t;
    t.show(1); // C++: Calls Top::show(int)
    t.show(1.0);
    Bottom b;
    b.show(1); // C++: Calls Bottom::show(double)!
    b.show(1.0); // C++:
}