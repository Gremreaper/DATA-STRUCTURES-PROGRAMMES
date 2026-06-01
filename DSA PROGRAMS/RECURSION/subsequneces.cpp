#include<iostream>
#include<vector>
using namespace std;
void func(int index,vector<int>&ds,int arr[],int n)
{


    if(index>=n)
    {
        for(auto it:ds)
        {
            cout<<it<<" ";
        }

         if(ds.size()==0)
    {
        cout<<"{}"<<" ";
    }
    cout<<endl;

        return;
    }

    

    ds.push_back(arr[index]);
    func(index+1,ds,arr,n);
    ds.pop_back();
    func(index+1,ds,arr,n);
}

//Striver recursion series code -lecture no 7

int main()
{
   int n;
   cin>>n;


   vector<int>result;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }

   func(0,result,arr,n);
}