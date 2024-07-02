#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s;
        cin >> s;
        string x;
        cin >> x;
        int n = s.find(x);
        while (n != -1)
        {
            s.replace(n, x.size(), "#");
            n = s.find(x, n + 1);
        }
        cout << s << endl;
    }

    return 0;
}