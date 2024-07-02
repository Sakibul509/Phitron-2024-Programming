#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }
    for (string val : v)
    {
        cout << val << endl;
    }

    return 0;
}
// input:
//  5
//  Sakibul Islam
//  Akib Khan
//  Abir Islam
//  Nayeem Islam
//  Neymar Jr.

// output:
//  Sakibul Islam
//  Akib Khan
//  Abir Islam
//  Nayeem Islam
//  Neymar Jr.
