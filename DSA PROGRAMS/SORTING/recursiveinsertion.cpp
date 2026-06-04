#include<iostream>
using namespace std;
void func(int arr[],int n)
{
    if(n==1)
    {
        return ;
    }

    for(int j=0;j<=n-2;j++)
     {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
     }

     func(arr,n-1);
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

    func(arr,n);
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
}