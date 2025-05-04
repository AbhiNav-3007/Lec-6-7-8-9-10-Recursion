//print sum of n numbers from 1 to n;
// solve in parameterised way
#include<bits/stdc++.h>
using namespace std;
void print(int i, int sum){
    if (i<1) {
        cout<<sum;
        return;
    }
    else print(i-1, sum+i);
}
int main(){
    int n;
    cin>>n;
    print(n,0);
}