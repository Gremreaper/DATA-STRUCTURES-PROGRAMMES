//task is to merge two sorted arrays

#include<bits/stdc++.h>
using namespace std;
vector<int>sorted(vector<int>&a,vector<int>&b){
      vector<int>ans;
      int i=0,j=0;
      while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            ans.push_back(b[j]);
            j++;
        }else if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }else{
            ans.push_back(a[i]);
            ans.push_back(b[j]);
            i++,j++;
        }
      }

      while(i<a.size()){
        ans.push_back(a[i]);
        i++;
      }

      while(j<b.size()){
        ans.push_back(b[j]);
        j++;
      }
      return ans;
}
int main(){
    int m,n;
    cin>>m>>n;

    vector<int>v1(m),v2(n);
    for(int i=0;i<m;i++){
        cin>>v1[i];
    }

    for(int i=0;i<n;i++){
        cin>>v2[i];
    }

    vector<int>ans=sorted(v1,v2);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}