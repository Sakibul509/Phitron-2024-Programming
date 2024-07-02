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
    //Student a[n];
    //int *a =new int [n];
    Student *a = new Student[n];   //dynamic array use kora hoyse
    for(int i=0;i<n;i++)
    {   
        cin.ignore();            //namer por enter press kora hoyse bole eita use kora hoyese 
        getline(cin,a[i].name);   //space soho input neoar jonno eita use korte hoy
        cin>>a[i].roll>>a[i].marks;
    }
    for (int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    
    
    return 0;
}