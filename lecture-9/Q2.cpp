//check if string is palindrome 
#include<bits/stdc++.h>
using namespace std;
bool palindrome(int i, string &s1){
    if(i >= s1.size()/2) return true;
    if(s1[i] != s1[s1.size()-i-1]) return false;
    else return palindrome(i+1,s1);
}
int main(){
    string s1;
    cin>>s1;
    cout<<palindrome(0,s1);
}