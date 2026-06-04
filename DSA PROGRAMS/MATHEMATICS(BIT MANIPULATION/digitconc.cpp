#include<bits/stdc++.h>
using namespace std;
int main(){
    //get the digits from a number

    int n;
    cin>>n;
    int n2=n;

    vector<int>ans;
    while(n!=0){
        ans.push_back(n%10);
        n/=10;
    }

    reverse(ans.begin(),ans.end());

    for(int i:ans) cout<<i<<" ";
    cout<<endl;

    //to count the number of digits

    int r=0;
    while(n2!=0){
        r++;
        n2/=10;
    }
    cout<<r<<" ";
}