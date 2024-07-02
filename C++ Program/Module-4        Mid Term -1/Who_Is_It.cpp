
/*
   A student has several pieces of information, such as a unique ID, name, section, and total marks. You will be given the information of three students. Your task is to determine and print the details of the student who achieved the highest total marks. In the case of a tie (i.e., two or more students having the same total marks), print the information of the student with the smaller ID.

Input Format

    First line will contain T, the number of test cases.
    For each test case there will be 3 lines. Each line will contain - ID, Name, Section, Total Marks of a student. The name will contain lowercase English alphabets only.

Constraints

    1 <= T <= 1000
    1 <= ID <= 3
    1 <= |Name| <= 100
    'A' <= Section <= 'Z'
    0 <= Total Marks <= 100

Output Format

    Ouptut the information as asked in the question.

Sample Input 0

3
1 sakib A 50
2 rakib D 96
3 akib C 90
1 sakib A 50
2 rakib D 96
3 akib C 96
1 sakib A 50
2 rakib D 50
3 akib C 40

Sample Output 0

2 rakib D 96
2 rakib D 96
1 sakib A 50


*/

#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int id;
    char name[100];
    char section;
    int total_marks;
    // Student(int id,char name[100],char section,int total_marks)
    // {
    //     this->id=id;
    //     this->name[100]=name[100];
    //     this->section=section;
    //     this->total_marks=total_marks;
    // }
    // Student (){};

};
int main()
{   
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
     Student A,B,C;
     cin>>A.id>>A.name>>A.section>>A.total_marks;
     cin>>B.id>>B.name>>B.section>>B.total_marks;
     cin>>C.id>>C.name>>C.section>>C.total_marks;

     if(A.total_marks>B.total_marks&&A.total_marks>C.total_marks)
     {
       cout<<A.id<<" "<<A.name<<" "<<A.section<<" "<<A.total_marks<<endl;
     }
     else if(B.total_marks>A.total_marks&&B.total_marks>C.total_marks)
     {
        cout<<B.id<<" "<<B.name<<" "<<B.section<<" "<<B.total_marks<<endl;
     }
     else if(C.total_marks>A.total_marks&&C.total_marks>B.total_marks)
     {
        cout<<C.id<<" "<<C.name<<" "<<C.section<<" "<<C.total_marks<<endl;
     }
     else if(A.total_marks==B.total_marks&&B.total_marks==C.total_marks)
     {
        if(A.id<B.id&&A.id<C.id)
        {
            cout<<A.id<<" "<<A.name<<" "<<A.section<<" "<<A.total_marks<<endl;
        }
        else if(B.id<A.id&&B.id<C.id)
        {
             cout<<B.id<<" "<<B.name<<" "<<B.section<<" "<<B.total_marks<<endl;
        }
        else 
        {
            cout<<C.id<<" "<<C.name<<" "<<C.section<<" "<<C.total_marks<<endl;
        }
     }
        else if(A.total_marks==B.total_marks)
        {
            if(A.id<B.id)
            {
                cout<<A.id<<" "<<A.name<<" "<<A.section<<" "<<A.total_marks<<endl;
            }
            else 
            {
                cout<<B.id<<" "<<B.name<<" "<<B.section<<" "<<B.total_marks<<endl; 
            }

        }
        else if(B.total_marks==C.total_marks)
        {
           if(B.id<C.id)
           {
             cout<<B.id<<" "<<B.name<<" "<<B.section<<" "<<B.total_marks<<endl;
           }
           else 
           {
              cout<<C.id<<" "<<C.name<<" "<<C.section<<" "<<C.total_marks<<endl;
           }
        }
        else if(A.total_marks==C.total_marks)
        {
            if(A.id<C.id)
            {
                 cout<<A.id<<" "<<A.name<<" "<<A.section<<" "<<A.total_marks<<endl;
            }
            else 
            {
                cout<<C.id<<" "<<C.name<<" "<<C.section<<" "<<C.total_marks<<endl;
            }
        }

     }



    


    
    return 0;
}