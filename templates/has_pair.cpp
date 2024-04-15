#include <iostream>
#include <vector>
#include <list>
using namespace std;


template <typename T>
bool has_pair(T begin, T end) {
  T previous = begin++;
  while(begin!=end) {
    if (*begin == *previous) return true;
    ++begin;
    ++previous;
  }
  return false;
}


int main() {
  list<int> v1{1,2,3,1,4,5};
  cout << has_pair(v1.begin(), v1.end())<< endl;
  list<int> v2{1,2,3,1,5,5};
  cout << has_pair(v2.begin(), v2.end())<< endl;
  list<int> v3{1,1,3,1,4,5};
  cout << has_pair(v3.begin(), v3.end())<< endl;
  list<int> v4{1,2,3,4,4,5};
  cout << has_pair(v4.begin(), v4.end())<< endl;
  int* v5 = new int[5]{1,2,3,4,5};
  cout << has_pair(v5, v5+5)<< endl;
  cout << "DEBUG" << v5 << " " << v5+5 << endl;
  int v6[] = {1,2,3,4,5};
  cout << has_pair(v6, v6+5)<< endl;
  cout << "DEBUG" << v6 << " " << v6+5 << endl;
}
