#include <iostream>

struct foo{
  foo() = delete;
  foo(const foo& f) = delete;
  foo& operator=(const foo&f) = default;
};



int main(){
  foo f;
  foo g;
  f=g;
  int final; //override;
}
