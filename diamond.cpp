#include <iostream>

using namespace std;
struct bottom;

struct top{
	top(int i) { cout << "top constructor called with " << i << endl;}
	top() {cout << "top default" << endl;}
};

struct left:virtual top{
	left():top(1) {cout << "left default" << endl;}
};
struct right:virtual top{
	right():top(2) {cout << "right default" << endl;}
};
struct bottom:left,right{
    bottom():left(), right()
    {cout << "We have reached the bottom of all creation" << endl;}
    
};

int main(){
    bottom b;
}
