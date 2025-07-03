// swap two alternative numbers

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int value;
    for(int i=0;i<n-1;i+=2)
    {
        value=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=value;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}