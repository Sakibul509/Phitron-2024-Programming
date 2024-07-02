#include<bits/stdc++.h>
using namespace std;
class Donner{
    public:
    string name;
    string group;
    int age;
    Donner(string name,string group,int age)
    {
        this->name=name;
        this->group=group;
        this->age=age;
    }
};
int main()
{
    Donner *sakib=new Donner("SakibKhan","O+",34);
    Donner *Amit=new Donner("Amit","A-",23);
    cout<<sakib->name<<endl<<sakib->group<<endl<<sakib->age<<endl;
    
    return 0;
}