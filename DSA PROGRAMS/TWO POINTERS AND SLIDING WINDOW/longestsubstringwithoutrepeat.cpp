#include<bits/stdc++.h>
using namespace std;
int solve(string &s,int n){
    int maxi=INT_MIN;
    unordered_map<char,int>mpp;
    int start=0,end=0;
    while(start<=n-1){
        mpp[s[start]]++;
        while(mpp[s[start]]>1){
            mpp[s[end++]]--;
        }
        maxi=max(maxi,start-end+1);
        start++;
    }
    return maxi==INT_MIN ? -1 : maxi;
}
int main()
{

    string s;
    cin>>s;
    if(s.length()==0){
        cout<<0<<endl;
    }else{
    cout<<solve(s,s.length());
    }
}