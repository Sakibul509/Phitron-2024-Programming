#include<bits/stdc++.h>
using namespace std;
int *sort_it(int n)
{
    int *A=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
      sort(A,A+n,greater<int>());
    
    
     return A;
   

}
int main()
{

   int N;
   cin>>N;
   
   int *ar=sort_it(N);
   for(int i=0;i<N;i++)
    {
        cout<<ar[i]<<" ";
    }
   
    delete [] ar;
    return 0;
}