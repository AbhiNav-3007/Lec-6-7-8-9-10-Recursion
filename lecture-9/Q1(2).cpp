//reverse an array 
//M-2 :- do reverse using single variable
#include<bits/stdc++.h>
using namespace std;
void reverse(int i, int arr[], int n){
    if(i>=n/2) return;
    else swap (arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i; i<n; i++) cin>>arr[i];
    reverse(0,arr,n);
    for(int i=0; i<n;i++) cout<<arr[i]<<" ";
    
}