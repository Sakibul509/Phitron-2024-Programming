#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   
   for(int i=1;i<=t;i++)
   {
     string n;
    cin>>n;
    int sum_of_first_3_digit=(n[0]-'0'+n[1]-'0'+n[2]-'0');
    int sum_of_last_3_digit=(n[3]-'0'+n[4]-'0'+n[5]-'0');
    if(sum_of_first_3_digit ==  sum_of_last_3_digit)
    {
      cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
   }


   


    
    return 0;
}