#include<bits\stdc++.h>
using namespace std;
int * fun()
{
    int *b=new int [2];
    b[0]=10;
    b[1]=20;
    return b;
}
int main()
{

   int *a= fun() ;
   cout<<a[0]<<" "<<a[1];
    return 0;
}