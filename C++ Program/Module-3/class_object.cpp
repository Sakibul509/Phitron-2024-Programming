#include<bits\stdc++.h>
using namespace std;
class Student
{   
    public:
        char name[100];
        int roll;
        double cgpa;

};

int main()
{
    Student a,b;
    cin. getline(a.name,100); 
    cin>>a.roll>>a.cgpa;
    getchar();
    cin.getline(b.name,100);
    cin>>b.roll>>b.cgpa;

    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cgpa<<endl;


   //input:   Sakib Vai    output:
    //        24 3.89      Sakib Vai 24 3.89
   //        Abir Vai      Abir Vai  25 3.87
  //         25 3.87
    
    return 0;
}