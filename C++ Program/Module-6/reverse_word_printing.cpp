#include<bits/stdc++.h>
using namespace std;
//using while loop
int main()
{
   string s; 
   getline (cin,s); //input: I am Sakib
   stringstream ss(s);
   string word;
   while(ss>>word)
   {
     cout<<word<<endl;  //Output: I\n am\n Sakib\n ekta ekta kore word print korbe 
   }

    
    return 0;
}