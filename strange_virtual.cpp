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
        //Comment out the operator below for fascinating special case
        //void operator=(const derived& rhs){
        //      std::cout << "derived takes derived" << std::endl;
        //}
};

int main(){
        base b;
        derived d;

        b=d;
        d=b;
        b=b; //surprisingly, no v-table lookup
        d=d;
        return 0;
}
