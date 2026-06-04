#include<bits/stdc++.h>
using namespace std;
int main()
{
    size_t n;
    cin>>n;

    vector<size_t>store_odd;
    vector<size_t>store_even;

    if(n==2 || n==3)
    {
        cout<<"NO SOLUTION"<<endl;
    }
   else{
    for(size_t i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            store_odd.push_back(i);
        }else{
            store_even.push_back(i);
        }
    }

    vector<size_t>ans;

    for(auto it:store_even)
    {
        ans.push_back(it);
    }

    for(auto it:store_odd)
    {
        ans.push_back(it);
    }

    for(auto it:ans)
    {
        cout<<it<<" ";
    }
   }

}