#include<iostream>
#include<vector>
using namespace std;

void func(int index,int size,vector<int>&store,int arr[],int k,int sum)
{
   if(index>=size)
   {
    if(sum==k)
    {
        for(auto it:store)
        {
            cout<<it<<" ";
        }


        cout<<endl;
    }

    return;
   }

   sum+=arr[index];
   store.push_back(arr[index]);
   func(index+1,size,store,arr,k,sum);
   sum-=arr[index];
   store.pop_back();
   func(index+1,size,store,arr,k,sum);
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
    
    func(0,n,store,arr,k,0);


}