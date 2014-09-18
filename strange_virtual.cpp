#include <iostream>
//WAT
struct base{

        virtual base& operator=(const base& rhs){
                std::cout << "base" << std::endl;
                return *this;
        }
};

struct derived:public base{
        base& operator=(const base& rhs){
                std::cout << "derived" << std::endl;
                return *this;
        }
        //void operator=(const derived& rhs){
        //      std::cout << "derived takes derived" << std::endl;
        //}
};

int main(){
        base b;
        derived d;

        b=d;
        d=b;
        b=b;
        d=d;
        return 0;
}
