//#include <iostream>
import java.util.*;

class base{
  void bar(double a){
    System.out.println( "base->bar(double) a = " + a  );
  }
  void library(double a){
    System.out.println( "base->library(double) a = " + a );
  }
  void library(int a){
    System.out.println( "base->library(int) a = "  + a  );
  }
  void bar(String s){
    System.out.println( "base->bar(string) s = " + s  ); 
  }
}

class derived extends base{
  public static void main(String[] args){
    base b=new base();
    derived d=new derived();
    b.library(3.14);
    b.bar(3.14);
    d.bar(3.14);
    d.bar("Marcus"); //Does not compile:
//$g++ -std=c++0x whichfunction.cpp && ./a.out
//whichfunction.cpp: In function ‘int main()’:
//whichfunction.cpp:30:17: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]
//whichfunction.cpp:19:8: error:   initializing argument 1 of ‘void derived::bar(int)’ [-fpermissive]
//$
//
  }
  void bar(int a){
    System.out.println( "derived->bar(int) a = " + a  );
  }
}
