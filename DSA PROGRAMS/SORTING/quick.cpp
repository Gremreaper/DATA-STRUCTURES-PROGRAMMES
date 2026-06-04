#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr,int low,int high)
{
    int pivot_value=arr[low];
    int i=low;
    int j=high;

    while(i<j)
    {
        while(arr[i]<=pivot_value && i<=high-1)
        {
            i++;
        }

        while(arr[j]>pivot_value && j>=low+1)
        {
            j--;
        }

        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[j],arr[low]);

    return j;
}

void check(vector<int>&arr,int low,int high)
{
    while(low<high)
    {
        int pivot_index=partition(arr,low,high);
        check(arr,low,pivot_index);
        check(arr,pivot_index+1,high);
    }
}
vector<int>quicksort(vector<int>&arr)
{
    check(arr,0,arr.size()-1);
    return arr;
}
int main()
{
    //quick sort as divide and conquer

    //big problem to smaller problems
    vector<int>arr={50,24,30,49,10};

    vector<int>a=quicksort(arr);

   for(auto it:a)
   {
         cout<<it<<" ";
   }
}


