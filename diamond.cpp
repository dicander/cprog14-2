#include <iostream>

using namespace std;

struct top{};
struct left:virtual top{};
struct right:virtual top{};
struct bottom:left,right{
    bottom():left(), right()
    {}
    
};

int main(){
    bottom b;
}
