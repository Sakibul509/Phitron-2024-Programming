
/*
    Problem Statement

You will be given an array A of size N. Initially, you need to print the array by sorting it in ascending order. Afterward, you need to print the array sorted in descending order.

Input Format

    First line will contain N.
    Next line will contain the array A.

Constraints

    1 <= N <= 10^5
    -10^9 <= A[i] <= 10^9 Where 0 <= i < N

Output Format

    Print two lines. First line will contain the array sorted in ascending order. Next line will contain the array sorted in descending order.

Sample Input 0

5
2 4 6 1 3

Sample Output 0

1 2 3 4 6
6 4 3 2 1

Submissions: 757

Max Score:

20

Difficulty:

Easy

Rate This Challenge:
More


*/


#include<bits/stdc++.h>
using namespace std;
int main()
{

   int N;
   cin>>N;
   int A[N] ;
   for(int i=0;i<N;i++)
   {
      cin>>A[i];
   }
   sort(A,A+N);
   for(int i=0;i<N;i++)
   {
       cout<<A[i]<<" ";    
   }
   cout<<endl;
   sort(A,A+N,greater<int>());
   for(int i=0;i<N;i++)
   {
     cout<<A[i]<<" ";
   }
    return 0;
}