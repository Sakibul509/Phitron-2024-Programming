#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    int marks1;
    int marks2;
    person(string nm,int ag,int m1,int m2)
    {
        name=nm;
        age=ag;
        marks1=m1;
        marks2=m2;
    }
    void hello()
    {
        cout<<name<<endl<<age<<endl;  //output: Sakibul\n21
    }
    int total_marks()
    {
        return marks1+marks2;
    }
};
int main()
{
    person Sakib("Sakibul",21,95,96);
    Sakib.hello();
    cout<<Sakib.total_marks()<<endl;  //output:191

    
    return 0;
}