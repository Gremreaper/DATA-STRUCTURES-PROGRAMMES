#include<iostream>
using namespace std;
int main()
{
    int n;
	  cin>>n;
	  
	  int ans1=0;
	  int ans2=0;
	  
	  for(int i=1;i<n;i++)
	  {
	    if(n%i==0)
	    {
	      n=n/i;
	      ans1=i;
	      for(int j=i;j<n;j++)
	       {
	         if(n%j==0)
	         {
	           ans2=j;
	           break;
	         }
	       }
	    }
	  }

      cout<<ans1<<ans2<<endl;
}