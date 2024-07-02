#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string name;
    int roll;
    int marks;


};
bool cmp(Student a,Student b)
{
    // if(a.marks>=b.marks) return true;  //marks same na hole
    // else 
    // return false;  
    
   // return a.marks>=b.marks;  //eivabe O kora jay same e asbe

  //marks same hole jar roll kom se age asbe 
  // if(a.marks>b.marks)
  // {
  //    return true;
  // }
  // else if(a.marks<b.marks)
  // {
  //   return false;
  // }
  
  if(a.marks==b.marks)
  {
    return a.roll<b.roll;   //shortcut way
  }
  return a.marks>b.marks;



  // else 
  // {
  //   if(a.roll<b.roll)
  //     {
  //       return true;
  //     }
  //     else 
  //     {
  //       return false ;
  //     }
  //    // return a.roll<b.roll; //short way
  // }

}

int main()
{
   int n;
   cin>>n;
   Student a[n];
 
   for(int i=0;i<n;i++)
   {
      cin>>a[i].name>>a[i].roll>>a[i].marks;
   }
   sort(a,a+n,cmp);
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
// Akib 19 91
// Sakib 9 96
// Abir  10 95

// output:
// Sakib 9 96    // marks same noy
// Abir 10 95
// Akib 19 91
// Sifat 20 90
// Rifat 21 89

//marks same hole jar roll kom se age asbe
//input:
// 5
// Rifat 21 89
// Sifat 20 90
// Akib 19 91
// Sakib 9 96
// Abir  10 96

//output:
// Sakib 9 96
// Abir 10 96
// Akib 19 91
// Sifat 20 90
// Rifat 21 89

