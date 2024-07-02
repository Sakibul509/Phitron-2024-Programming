#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student std[n];
    for (int i = 0; i < n; i++)
    {
        cin >> std[i].nm >> std[i].cls >> std[i].s >> std[i].id;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            char temp = std[i].s;
            std[i].s = std[j].s;
            std[j].s = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << std[i].nm << " " << std[i].cls << " " << std[i].s << " " << std[i].id << endl;
    }

    return 0;
}