#include<bits/stdc++.h>
using namespace std;
/*method-1 (first print then call the function then again call then print */

/*
void print(int n){
    if(n>10) return;
    else cout<<n<<endl;
    print(n+1);
}
int main(){
    int n;
    cin>>n;
    print(n);
}
*/

/* method-2 (first call functions from end to start
 and then print from start to end) */
/* 
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
*/

/*method-3 (take two parameter inside function) */
void print(int i, int n){
    if(i>n) return;
    else cout<<i<<endl;
    print(i+1,n);
}
int main(){
    int n;
    cin>>n;
    print(1,n);
}