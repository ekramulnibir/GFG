#include<bits/stdc++.h>
using namespace std;

int find_second_largest(int arr[], int n, int largest){
    int second_largest = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] != largest){
            for(int j = i + 1; j < n; j++){
                if(arr[j] > second_largest){
                    second_largest = arr[j];
                }
            }
        } 
    }
    return second_largest;
}

int find_largest(int arr[], int n){
    int largest = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int n; cin >> n;
    int ar[n];

    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    /* for(int i = 0; i < n; i++){
        cout << ar[i] << " ";
    }
    */

    int largest = find_largest(ar, n);
    cout << largest << endl;

    int second_largest = find_second_largest(ar, n, largest);
    cout << second_largest << endl;
}