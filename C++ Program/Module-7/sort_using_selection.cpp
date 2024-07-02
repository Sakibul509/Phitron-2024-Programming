#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;

};

int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i].marks<a[j].marks)
            {
                swap(a[i],a[j]);
            }
            if(a[i].marks==a[j].marks)
            {
                if(a[i].roll>a[j].roll)
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
        
    }
    
    return 0;
}

// input:
// 5
// Rifat 21 89
// Sifat 20 90
// Akib 19 90
// Sakib 9 95
// Abir  10 95

// output:
// Sakib 9 95
// Abir 10 95
// Akib 19 90
// Sifat 20 90
// Rifat 21 89
