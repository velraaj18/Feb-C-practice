#include<iostream>
using namespace std;

// defining global variable
int a=10;
int c=90;

int main(){
   // defining local variable
   int b= 20;
   int c = 70; //local and global variable has same name. O/P will be local variable
   cout<<a+b<<endl;  // global variable can be used anywhere in the program
   cout<<c<<endl;  // 70
   cout<< ::c << endl; // 90 (::) Scope resolution operator for obtaining global variable value.
   return 0;
}
