#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> v2 = {101, 102, 103, 104};
    v.insert(v.begin() + 2, v2.begin(), v2.end());

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}

// output: 1 2 101 102 103 104 3 4 5 6