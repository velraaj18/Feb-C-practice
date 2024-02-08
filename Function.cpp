#include<iostream>
using namespace std;

//function creation
// Fun_type Fun_name(Parameters)

int add(int a ,int b){    
   if (a>b)
   {
       cout<<a;
   }
   else
   {cout<<b;
   }
   
   
   
}

// Main function
int main() {
   int x=10 , y=5;
   add(x,y);   //function calling
   return 0;
}