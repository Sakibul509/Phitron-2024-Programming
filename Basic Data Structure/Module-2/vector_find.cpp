#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    // vector<int>::iterator it; //eita re nicher upaye O lekha jay

    auto it = find(v.begin(), v.end(), 3); // output:Found
    // cout<<*it;
    if (v.end() == it)
        cout << "Not Found";
    else
        cout << "Found";

    return 0;
}