#include<bits/stdc++.h>
using namespace std;
int main()
{

   string s;
   
   getline(cin,s) ;
   
//    stringstream ss(s);
  stringstream ss;
  ss<<s;
   string word;
   int count=0;
//    while(ss>>word)
//    {
//      cout<<word<<endl;
//    }
  
  while(ss>>word)
  {
    count++;
  }
  cout<<count<<endl;
    return 0;
}