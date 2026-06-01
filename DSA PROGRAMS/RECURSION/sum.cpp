//sum of all elements of array using recursion

#include<iostream>
using namespace std;

int summation(int arr[],int size)
{
    if(size==0)
    {
        return 0;
    }

    int sum=arr[0];
    int bigger=sum+summation(arr+1,size-1);

    return bigger;
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

    int sum=summation(arr,n);
    cout<<sum<<endl;
}