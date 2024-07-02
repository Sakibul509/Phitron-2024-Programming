#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)  // O(n) ...//duita mile hosse O(nlogn)
    {
        int x=i;
        while(x>0)     //O(logx or logi or logn)
        {
            int digit=x%10;
            x/=10;
            cout<<digit<<" ";
            
        }
        cout<<endl;
    }
    

    return 0;
}