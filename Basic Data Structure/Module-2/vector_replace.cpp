#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,2,5,6,2,8};
    replace(v.begin(),v.end(),2,100);
    for(int x:v)
    {
        cout<<x<<" ";
    }

    return 0;
}
//output:1 100 3 100 5 6 100 8