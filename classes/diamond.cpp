#include <iostream>

using namespace std;
struct bottom;

struct top{
	top(int i) { cout << "top constructor called with " << i << endl;}
	top() {cout << "top default" << endl;}
};

struct left:top {
	left():top(1) {cout << "left default" << endl;}
};
struct right:top {
	right():top(1) {cout << "right default" << endl;}
};
struct bottom:left,right{
    bottom():left(), right()
    {cout << "We have reached the bottom of all creation" << endl;}
    
};

int main(){
    bottom b;
}
