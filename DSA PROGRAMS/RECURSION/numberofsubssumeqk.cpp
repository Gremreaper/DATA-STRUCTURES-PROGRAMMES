#include<iostream>
#include<vector>
using namespace std;

int func(int index,int size,vector<int>&store,int arr[],int k,int sum)
{
   if(index>=size)
   {
    if(sum==k)
    {
        return 1;
    }else{
        return 0;
    }
   }

   sum+=arr[index];
   int left=func(index+1,size,store,arr,k,sum);
   sum-=arr[index];
   int right =func(index+1,size,store,arr,k,sum);

   return left+right;
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

    vector<int>store;

    int k;
    cin>>k;
    
    cout<<func(0,n,store,arr,k,0);


}