#include<bits/stdc++.h>
using namespace std;

int digitSum(int n){
    if(n / 10 == 0) return n;
    return n%10 + digitSum(n/10);
}

int main()
{
    int n; cin >> n;
    cout<< digitSum(n);

    return 0;
}