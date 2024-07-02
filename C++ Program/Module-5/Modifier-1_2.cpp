#include<bits/stdc++.h>
using namespace std;
int main()
{
    //   string a="Hello";
    //   string b="A";
      //a+=b;
     //a.append(b);
      //cout<<a<<endl;
      //cout<<b<<endl;
      //a="HelloA";  //works; output: HelloA
      //a=a+b;       //works; output: HelloA
      //a[5]='A';   // Did'nt work:output:Hello
    //   a.push_back('A'); //works: output: HelloA
    //   a.pop_back();  //delete kore dey shes er char ,;output: Hello
    //   a.pop_back(); //output: Hell

    //  a="Gello";    //output:Gello
    //  a.assign("Gello"); //output:Gello

    // string a="HelloWorld";
    // a.erase(4,3);    //output:Hellrld;
    //a.replace(4,3,"so");//output:Hellsorld
    //a.insert(5,"sakib"); //output:HellosakibWorld
    //cout<<a<<endl;
    string s;
    //string::iterator it;
    cin>>s;   //input:Hello_World
    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i]<<endl;
    // }
    //cout<<*s.begin()<<endl;  //output:H
    //cout<<*(s.end()-1)<<endl;  //output:d
    //for(it=s.begin();it<s.end();it++)
    //for(string::iterator  it=s.begin();it<s.end();it++)
    for(auto it=s.begin();it<s.end();it++)

    {

        cout<<*it<<endl;
    }


    



    
    return 0;
}