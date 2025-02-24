#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &s, int start, int end)
{
    if(start >= end)
    {
        return true;
    }
    return (s[start] == s[end]) && checkPalindrome(s, start+1, end-1);

}

int main()
{
    string s; cin >> s;
    int end = s.length();

    if(checkPalindrome(s, 1, end)){
        cout << "Palindrome";
    }
    else{
        cout<< "Not Palindrome";
    }

    return 0;
}