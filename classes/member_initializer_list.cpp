#include <iostream>
#include <string>


using namespace std;


struct foo {
  foo(string s):name(s){};
  string name;
};


int main() {
  string m("a");
  foo f(m);
  return 0;
}
