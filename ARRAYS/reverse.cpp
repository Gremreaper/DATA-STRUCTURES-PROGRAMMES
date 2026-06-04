//reverse two numbers
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

   int left=0;
   int right=n-1;
   int value;

   while(left<=right)
   {
    value=arr[left];
    arr[left]=arr[right];
    arr[right]=value;

    left++;
    right--;
    
   }
   
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}