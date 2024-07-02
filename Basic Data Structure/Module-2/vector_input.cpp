#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector input নেওয়ার একটি উপায়ঃ

    //  vector<int>v;
    //  int n;
    //  cin>>n;
    //  for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //    v. push_back(x);
    // }
    // for(int val:v)
    // {
    //     cout<<val<<" ";
    // }

    // input:5
    //  1 2 3 4 5
    //  output:1 2 3 4 5

    // vector inputনেওয়ার ২য় উপায়ঃ

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;

    // input:5
    // 1 2 3 4 5
    // output:1 2 3 4 5
}