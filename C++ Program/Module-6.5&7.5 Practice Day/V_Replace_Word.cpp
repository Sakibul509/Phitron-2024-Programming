#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string f="EGYPT";
    string r=" ";
    int t=s.find(f);
    while(t!=-1)
    {
        s.replace(t,f.length(),r);
        t=s.find(f,t+r.length());

    }
    cout<<s<<endl;



    
    return 0;
}