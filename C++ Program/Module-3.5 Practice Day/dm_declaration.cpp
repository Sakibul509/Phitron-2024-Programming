#include<bits\stdc++.h>
using namespace std;
int main()
{
    // variable declaration
//    int *a= new int;
//    *a=5;
//    cout<<*a<<endl;


    // array declare
    int *ar= new int[2] ;
    // ar[0]=5;
    // ar[1]=10;
    *(ar+0)=5;
    *(ar+1)=10;
     
    //  for(int i=0;i<2;i++)
    //  {
    //     cout<<ar[i]<<endl;
    //  }
    
    // cout<<ar[0]<<endl;
    // cout<<ar[1]<<endl;
    cout<<*(ar+0)<<endl;
    cout<<*(ar+1)<<endl;




    
    return 0;
}