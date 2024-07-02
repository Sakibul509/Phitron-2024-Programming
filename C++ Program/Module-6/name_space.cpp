#include<bits/stdc++.h>
using namespace std;
namespace Abir
{
    int Age =24;
    void hello()
    {
        cout<<"Abir NameSpace"<<endl;
    }
}
namespace Sakib
{
    int Age2=22;
    void hello2()
    {
        cout<<"Sakib Namespace"<<endl;
    }
}
using namespace Abir;
using namespace Sakib;

int main()
{
    cout<<Age<<endl;
    cout<<Age2<<endl;

    
    return 0;
}