#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello World!";
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.capacity()<<endl;
    s.clear();
    cout<<s<<endl;
    cout<<s.size()<<endl;
    string s1="Hello";
    //s1.clear();
    if(s1.empty()==true)cout<<"Empty"<<endl;
    else cout<<"Not Empty"<<endl;
    if(s1.size()==0)cout<<"Empty."<<endl;
    else cout<<"Not Empty."<<endl;
    string s2="Hello World! How are You?";
     s2.resize(11);
     cout<<s2<<endl;
    s2.resize(28,'x');
    cout<<s2<<" "<<s2.size()<<endl;


    
      
    return 0;
}