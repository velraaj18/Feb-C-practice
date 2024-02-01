#include<iostream>
using namespace std;

// creating class
// class name starts with capital letter
class Calculate {
   // Access specifier    
   public : 
   // Data members of class
   int a=10 ,b=20;
   // member function
   int addition(){
      cout<<a+b;
   }
};

int main() {
   // class have no memory allocation.  So create object of any name.
   Calculate add;   // add => object name

   // . operator used to access the data members and member function of class.
   add.addition();
   return 0;
}