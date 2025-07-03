#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    
    vector<pair<int,int>>v;
    for(auto it:mpp)
    {
        v.push_back(make_pair(it.first,it.second));
    }
    
    reverse(v.begin(),v.end());
    vector<int>ans;
    
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i].second==v[i-1].second)
               {
                   int maxi=max(v[i].first,v[i-1].first);
                   ans.push_back(maxi);
               }else
               {
                   ans.push_back(v[i].first);
               }
    }
    
    
    vector<int>key;
           
           int size=(ans.size()-1);
           while(k!=0)
           {
               key.push_back(ans[size]);
               k--;
               size--;
           }
           
           for(int i=0;i<k;i++)
           {
               cout<<key[i]<<endl;
           }
}