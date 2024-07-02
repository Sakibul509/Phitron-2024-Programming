#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;            
     cin>>n;                   //10^14 porjonto
    // for(int i=1;i<=sqrt(n);i++)
    for(int i=1;i*i<=n;i++)        //O(sqrt(n)) time complexity
     {
        if(n%i==0)
        {
            cout<<i<<" ";
            if(n/i!=i)
            {
                cout<<n/i<<endl;
            }
        }
     }

    return 0;
}
//input:36

//output:
// 1 36
// 2 18
// 3 12
// 4 9
// 6 
