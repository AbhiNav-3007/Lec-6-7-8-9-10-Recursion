//print n to 1 using backtracking
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n>=10) return;
    else 
    print(n+1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    print(n);
}