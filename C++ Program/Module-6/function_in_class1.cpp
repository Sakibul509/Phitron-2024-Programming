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
    void hello()
    {
        cout<<name<<endl<<age; //output:Sakibul\n21
    }
};
int main()
{
    person Sakib("Sakibul",21);
    Sakib.hello();

    
    return 0;
}