#include<bits\stdc++.h>
using namespace std;
class Student
{
    public:
       int roll;
       int cls;
       double gpa;
       Student(int roll,int cls,double gpa)
       {
          this->roll=roll;
          this->cls=cls;
          this->gpa=gpa;
       }

};
int main()
{    
    Student rahim(29,9,4.98);
    Student karim(30,9,4.96);
    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
    cout<<karim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;


 
    return 0;
}