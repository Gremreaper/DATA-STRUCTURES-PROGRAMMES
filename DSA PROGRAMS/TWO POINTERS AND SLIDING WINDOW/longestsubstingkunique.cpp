#include<bits/stdc++.h>
using namespace std;
int solve(string &s,int k){
    unordered_map<char,int>mpp;
         int start=0,end=0,maxi=INT_MIN;
         while(start<s.length())
         {
             mpp[s[start]]++;
             while(mpp.size()>k){
                 mpp[s[end]]--;
                 
                 if(mpp[s[end]]==0){
                     mpp.erase(s[end]);
                 }
                 
                 end++;
             }
             
             if(mpp.size()==k){
                 maxi=max(maxi,start-end+1);
             }
             start++;
         }
         return maxi;
}
int main()
{
    //agenda is to find longest substring with k unique characters
    string s;
    cin>>s;

    int k;
    cin>>k;

    cout<<solve(s,k);
}