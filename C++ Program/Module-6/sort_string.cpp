#include<bits/stdc++.h>
using namespace std;
int main()
{

   string s;
   cin>>s;
   sort(s.begin(),s.end()) ;  //input:abcabchihk  Output:aabbcchhik
   
   cout<<s<<endl;
    return 0;
}