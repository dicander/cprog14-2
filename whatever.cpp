#include<iostream>

class base;
class derived;
class bottom;

using namespace std;

class base {
    protected:
        int value;
    public:
        base(const base& rhs) {
            
        }
        base():value(13){ cout<< "base default constructor" << endl;}
        base(int b):value(b) {}
        int get_value(){return this->value;}
};

class derived : public base {
    public:
        derived() {
            cout << "derived default constructor" << endl;
            //this->value = 42;
        }
        derived(const derived& rhs) {
            cout << "derived copy constructor" << endl;
            this->value=rhs.value;
        }
        void foo() {
            this->value = 42;
        }
};

class bottom : public derived {
    
};

int main() {
    derived d;
    derived e(d);
}
