int print2largest(int arr[], int n) {
	    int maxi=-100;
	    for(int i=0;i<n;i++)
	    {
	        if(maxi<arr[i])
	        {
	            maxi=arr[i];
	            //largest
	        }
	    }
	    
	    int maxi2=-1;
	    
	    for(int j=0;j<n;j++)
	    {
	        if(maxi2<arr[j] && arr[j]<maxi)
	        {
	            maxi2=arr[j];
	        }
	    }
	    
	    return maxi2;
	}