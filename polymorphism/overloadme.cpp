#include <iostream>


using namespace std;


void overloaded(int a) {
    cout << "overloaded(int)" << endl;
}


void overloaded(double a) {
    cout << "overloaded(double)" << endl;
}


struct widget {
    widget& operator-(const widget& rhs) {
        cout << "overloaded inside struct" << endl;
        return *this;
    }

};


widget& operator+(widget& lhs, widget& rhs) {
    cout << "overloaded outside struct!" << endl;
    return lhs;
}


int main() {
    overloaded(3.14);
    overloaded(13);
    widget a;
    widget b;
    a + b;
    a - b;
}
