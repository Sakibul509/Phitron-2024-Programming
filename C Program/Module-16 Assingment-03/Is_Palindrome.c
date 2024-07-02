
/*

Problem Statement

You will be given a string, S, as input. Take this input in the main function. 
Next, write a function named is_palindrome() that will receive this string.
 Return type of that function will be 32 bit integer. The function checks whether the string is a palindrome or not.
 If it is a palindrome, return 1; otherwise, return 0. Receive this value in the main function and, with the help of that value, print "Palindrome" or "Not Palindrome".

Palindrome: A palindrome is a word that reads the same forward and backward.

Input Format

    Input will contain the string S.

Constraints

    1 <= |S| <= 1000; Here |S| means the length of the string.

Output Format

    Output "Palindrome" or "Not Palindrome" without the quotation marks.

Sample Input 0

madam

Sample Output 0

Palindrome

Sample Input 1

abccba

Sample Output 1

Palindrome

Sample Input 2

x

Sample Output 2

Palindrome

Sample Input 3

abca

Sample Output 3

Not Palindrome

*/





#include<stdio.h>
#include<string.h>
int is_palindrome(char x[])

{
    int first=0;
    int last=strlen(x)-1;
    while(first<last)
    {
        if(x[first]!=x[last])
        {
            return 0;
        }
        first++;
        last--;
    }
    
         
    return 1;
}
int main ()
{
     char n[1000];
     scanf("%s",&n);
     int count=is_palindrome(n);
     if(count)
     {
         printf("Palindrome\n");
     }
     else
     {
         printf("Not Palindrome\n");
     }
     
     
     

    return 0; 
}