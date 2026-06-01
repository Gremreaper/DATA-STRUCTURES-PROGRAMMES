#include<bits/stdc++.h>
using namespace std;
pair<int,int> solve(int start,int end,int arr[],int target)
{
    int floor=-1,ceil=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==target)
        {
            floor=ceil=mid;
            break;
        }else if(arr[mid]<target)
        {
            floor=arr[mid];
            start=mid+1;
        }else{
            ceil=arr[mid];
            end=mid-1;
        }
    }

    return {floor,ceil};  
}
int main()
{
    int n;
    cin>>n;


    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int target;
    cin>>target;


    pair<int,int>ans=solve(0,n-1,arr,target);
    cout<<ans.first<<" "<<ans.second<<endl;
}