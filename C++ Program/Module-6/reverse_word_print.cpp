#include<bits/stdc++.h>
using namespace std;
void print(stringstream&ss)
{
    string word;
    if(ss>>word)
    {
        // cout<<word<<endl; //output:I \n am\n sakib\n
        print(ss);
        cout<<word<<endl;   //output: Sakib\n am\n I\n
        
    }
}
int main()
{
   string s; 
   getline (cin,s); //input: I am Sakib
   stringstream ss(s);
   print(ss);
   
    
    return 0;
}