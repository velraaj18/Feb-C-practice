#include<iostream>
using namespace std;

int function(){
   int a =10;

   // declaring pointer
   int *ptr ;
   // Assingning address of variable "a" to ptr
  ptr = &a;

  cout<<a<<endl;
  cout<<ptr<<endl;
  cout<<*ptr<<endl;  //Derefrencing pointer => gives the value of the variable
}

int main(){
   function();
   return 0;
}