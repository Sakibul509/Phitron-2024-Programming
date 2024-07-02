#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];               //10^7 porjonto
    for (int i = 0; i < n; i++) // O(n) time complexity
    {
        cin >> ar[i];
    }
    int s = 0;
    for (int i = 0; i < n; i++) // O(n) time complexity
    {                           // ei programe time complexity holo O(n)
        s += ar[i];
    }
    cout << s;

    return 0;
}
//input:
//5
//10 20 30 40 50
//output:
//150