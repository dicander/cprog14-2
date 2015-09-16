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
  list<int> v{1,2,3,1,4,5};
  cout << has_pair(v.begin(), v.end())<< endl;
}
