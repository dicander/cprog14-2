#include <iostream>

using namespace std;

struct top{
	top(int i) { cout << "top constructor called with " << i << endl;}
	top() {cout << "top default" << endl;}
};
struct left:top{
	left():top(1) {cout << "left default" << endl;}
};
struct right:top{
	right():top(2) {cout << "right default" << endl;}
};
struct bottom:left,right{
    bottom():left(), right()
    {}
    
};

int main(){
    bottom b;
}
