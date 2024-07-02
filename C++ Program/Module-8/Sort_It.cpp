#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total_mark;
};
bool cmp(Student a, Student b)
{
    a.total_mark = a.math_marks + a.eng_marks;
    b.total_mark = b.math_marks + b.eng_marks;
    if (a.total_mark == b.total_mark)
    {
        return a.id < b.id;
    }
    else
    {
        return a.total_mark > b.total_mark;
    }
}
int main()
{
    int n;
    cin >> n;
    Student std[n];
    for (int i = 0; i < n; i++)
    {
        cin >> std[i].nm >> std[i].cls >> std[i].s >> std[i].id >> std[i].math_marks >> std[i].eng_marks;
    }
    sort(std, std + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << std[i].nm << " " << std[i].cls << " " << std[i].s << " " << std[i].id << " " << std[i].math_marks << " " << std[i].eng_marks << endl;
    }
    return 0;

    return 0;
}