#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;               //10^18 porjonto
    // while(n>0)  //O(log(n))
    // {
    //     int digit=n%10;
    //     cout<<digit<<endl;
    //     n/=10;
    // }
    for(int i=1;i<=n;i=i*2)   //O(log(n)) 
    {
        cout<<i<<endl;
    }
    
    return 0;
}

//input:123
//output:
// 1
// 2
// 4
// 8
// 16
// 32
// 64