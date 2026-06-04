#include<iostream>
using namespace std;
int main()
{
    //reverse a string

    int c;
    cin>>c;

    int arr[c];

    for(int i=0;i<c;i++)
    {
        cin>>arr[i];
    }

    int d;
    cin>>d;



    int i=d-1;
        int j=c-1;
        
        while(i>=0 && j>d)
       {
           int temp;
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           
           i--;
           j--;
       }
       
       int k=d;
       while(k>0)
       {
           int temp;
           temp=arr[k];
           arr[k]=arr[k-1];
           arr[k-1]=temp;
           
           k--;
       }
    for(int i=0;i<c;i++)
    {
        cout<<arr[i]<<" ";
    }
}