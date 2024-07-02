#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5}; // Elements Access
    // vector<int>::iterator it;  //eita bodle auto use korle hoye jay
    // cout<<v[v.size()-1]; //output:5
    // cout<<v.back();   //output:5
    // cout<<v[0];    //output:1
    // cout<<v.front(); //output:1
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}