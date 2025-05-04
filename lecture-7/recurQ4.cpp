//print from 1 to n using backtracking(call all functions at first then print number from last call to first call as did in Q1 method 2)
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n<=0) return;
    else
    print(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    print(n);
}