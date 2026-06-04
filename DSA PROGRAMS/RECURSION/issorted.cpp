//To check if the array provided is sorted or not using recursion

#include<iostream>
using namespace std;
bool issorted(int arr[],int size)
{
  if(size==0 ||size==1)
  {
    return true;
  }

  if(arr[0]>arr[1])
  {
    return false;
  }
  
  //if condition gets checked then check for size -1 next element 
  else{
      bool remain=issorted(arr+1,size-1);
      return remain;
  }
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

    bool ans=issorted(arr,n);

    if(ans==true)
    {
        cout<<"Array is sorted"<<endl;
    }else{
        cout<<"Array not sorted"<<endl;
    }

}