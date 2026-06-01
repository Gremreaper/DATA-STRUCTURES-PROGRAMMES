//Time Complexity :O(N) 
//space complexity :O(1)


#include<bits/stdc++.h>
using namespace std;
bool ispalindorme(string &s){
    int start = 0,end = s.length()-1;
    while(start<=end){
        if(!isalnum(s[start]) || !isalnum(s[end])){
            if(!isalnum(s[start])) start++;
            if(!isalnum(s[end])) end--;
        }else{
            if(tolower(s[start])!=tolower(s[end])) return false;
            start++;
            end--;
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    bool ans = ispalindrome(s);
    cout<<ans<<endl;
}