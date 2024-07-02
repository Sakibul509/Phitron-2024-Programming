#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    person(string nm,int ag)
    {
        name=nm;
        age=ag;
    }
};
int main()
{
    person Sakib("Sakibul",21);
    cout<<Sakib.name<<endl<<Sakib.age<<endl;
    //output:Sakibul\n21


    
    return 0;
}