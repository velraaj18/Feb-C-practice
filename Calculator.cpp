#include<iostream>
#include<string>

using namespace std;

int main(){
   char operation;
   double x,y;
   cout<<"Enter the operator(+,-,*,/,%)"<<endl;
   cin>>operation;
   cout<<"Enter two numbers"<<endl;
   cin>>x>>y;

   switch (operation)
   {
   case '+' :
      cout<<x+y<<endl;
      break;
   case '-' :
      cout<<x-y<<endl;
      break;
   case '*' :
      cout<<x*y<<endl;
      break;
   case '/' :
      cout<<x/y<<endl;
      break;
   
   default:
      cout<<"Error";
      break;
   }
}