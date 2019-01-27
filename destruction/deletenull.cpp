#include <iostream>

int main(){
  int* whatever=nullptr;
  for(int i=0; i<1000; ++i){
    delete[] whatever;
    delete whatever;
  }
}
