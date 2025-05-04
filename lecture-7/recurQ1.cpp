// print name 5 times
//with help of global variable:-
/* #include<bits/stdc++.h>
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
*/

//without global variable and with 2 parameters
#include<bits/stdc++.h>
using namespace std;
void print(int i, int n){
    if(i>n) return;
    else cout<<"abhinav"<<endl;
    print(i+1, n);
}
int main(){
    int n;
    cin>>n;
    print(1,n);
}