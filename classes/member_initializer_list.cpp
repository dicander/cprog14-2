#include <iostream>
#include <string>


using namespace std;


struct foo {
  foo(string s):name(s){ cout << a << endl;};
  const string name;
  int a;
};


int main() {
  string m("a");
  foo f(m);
  return 0;
}
