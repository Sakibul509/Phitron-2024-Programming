#include<bits\stdc++.h>
using namespace std;
int main()
{
//    Stack memory allocation
//    int a[2] ;
//    a[0]=10;
//    a[1]=20;
//    int b[5];
//    for(int i=0;i<2;i++)
//    {
//       b[i]=a[i];
//    }
//    b[2]=30;
//    b[3]=40;
//    b[4]=50;
//    for(int i=0;i<5;i++)
//    {
//       cout<<b[i]<<" ";
//    }

//    Dynamic memory allocation
   int *a= new int[2] ;
   a[0]=10;
   a[1]=20;
   int *b= new int [5];
   for(int i=0;i<2;i++)
   {
      b[i]=a[i];
   }
   b[2]=30;
   b[3]=40;
   b[4]=50;
   for(int i=0;i<5;i++)
   {
      cout<<b[i]<<" ";
   }
  delete []a;
    return 0;
}