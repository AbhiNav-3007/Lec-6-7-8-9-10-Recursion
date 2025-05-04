// print name 5 times
#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void print(){
    cnt++;
    if(cnt==6) return;
    else cout<<"abhinav"<<endl;

    print();
}
int main(){
    print();
}
