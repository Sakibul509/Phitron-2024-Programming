/*
  Problem Statement

Tiger and Pathan are bored with movies and want to play a game. They will play the game in N rounds. 
Each time, both of them will fight with each other, and one of them can win in a round. 
After N rounds, print the name of the winner who has won more rounds than the other. 
If they have won an equal number of rounds, then there will be a tie.

Input Format

    First line will contain T, the number of test cases.
    First line of each test case will contain N, the number of rounds.
    Last line of each test case will contain a string S of size N.
    Each character of that string refers to a round. If the character is 'T' then Tiger has won. 
    If the character is 'P' then Pathan has won.

Constraints

    1 <= T <= 100
    1 <= N <= 100000

Output Format

    Output "Tiger" if Tiger wins, "Pathaan" if Pathan wins.
    If it is a draw, print "Draw" without the quotation marks.

Sample Input 0

3
5
TPTPP
3
TTP
4
TPPT

Sample Output 0

Pathaan
Tiger
Draw


*/
#include <stdio.h>
#include<string.h>
int main()
{
   int T;
   scanf("%d",&T);
  for(int i=0;i<T;i++)
   {
       int N;
       scanf("%d",&N);
       char ar[N];
       scanf("%s",&ar);
       int tiger=0;
       int pathaan=0;
       for(int j=0;j<N;j++)
       {
           if(ar[j]=='T')
           {
               tiger++;
           }
           if(ar[j]=='P')
           {
               pathaan++;
           }
       }
       if(tiger==pathaan)
       {
           printf("Draw\n");
       }
       else if(tiger>pathaan)
       {
           printf("Tiger\n");
       }
       else 
       {
           printf("Pathaan\n");
       }
   }
   
    return 0;
}