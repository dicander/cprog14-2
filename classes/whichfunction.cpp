#include <iostream>


struct base{
  void bar(double a){
    std::cout << "base->bar(double) a = " << a << std::endl;
  }
  void bar(const std::string& s){
    std::cout << "base->bar(string) s = " << s << std::endl; 
  }
  //void library(double a){
  //  std::cout << "base->library(double) a = " << a << std::endl;
  //}
  void library(int a){
    std::cout << "base->library(int) a = "  << a << std::endl;
  }
  };


struct derived:public base{
  void bar(int a, int b){
    std::cout << "derived->bar(int) a = " << a << std::endl;
  }
  //using base::bar;
};


int main(){
  base b;
  derived d;
  b.library(3.14);
  b.bar(3.14);
  d.bar(3.14);
  d.bar("Marcus");
  d.library(42);
  return 0;
}
