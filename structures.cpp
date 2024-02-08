#include<iostream>
#include<string>
#include<iomanip> // for Setw

using namespace std;

// Defining Structure
// Syntax => struct structureName
struct studentData
{
   string name;
   int age;
   float marks;
};

int main(){
   int maximumStudent = 3;
   // syntax => struct structureName varName;
   struct studentData student[maximumStudent];  // calling structure and assigning an array.

   for (int i = 0; i < maximumStudent; i++)
   {
      cout<<"S.NO" " "<<i+1<<endl;
      cout<<"Name"<<endl;
      cin>>student[i].name;
       cout<<"age"<<endl;
      cin>>student[i].age;
       cout<<"marks"<<endl;
      cin>>student[i].marks;
   }
   
   cout<<"Student details :"<< endl;

   for ( int i = 0; i < maximumStudent; i++)
   {
      cout<<setw(10)<<"Student:" <<i+1 << endl;
       cout<<setw(10)<<"Name:"<< student[i].name<<endl;
       cout<<setw(10)<<"age:" <<student[i].age<<endl;
        cout<<setw(10)<<"marks:" <<student[i].marks<<endl;
   }
   
  return 0;

}
