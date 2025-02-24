#include<bits/stdc++.h>
using namespace std;

int maxCut(int length, int a, int b, int c){
    if(length < 0) return -1;
    if(length == 0) return 0;

    int res = max(maxCut(length-a, a, b, c),maxCut(length-a, b, b, c),maxCut(length-c, a, b, c));
    
    if (res == -1){
        return -1;
    }
    return res + 1;
}

int main()
{
    int lenght, a, b, c;
    cin >> lenght >> a >> b >> c;


    return 0;
}