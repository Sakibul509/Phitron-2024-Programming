#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool first_word=true;

    while (ss >> word)
    {
        if(first_word==false)
        {
            cout<<" ";
        }
        first_word=false;
        for (int i = word.length() - 1; i >= 0; i--)
        {
            cout << word[i];
        }
        
        // reverse(word.begin(),word.end());
        // cout<<word<<" ";
    }
    cout<<endl;

    return 0;
}