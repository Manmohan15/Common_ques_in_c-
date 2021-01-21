class Solution{
public:
    void swap(int& a,int& b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
	void merge(int arr[], int arr2[], int n, int m) {
	    // code here
	    
	    int gap=m+n;
	    int i=0;
	    int j=0;
	    while(gap>1)
	    {
	    gap=int(ceil((float(gap)/2)));
	   // cout<<"gap"<<gap<<endl;
	    for(i=0;i+gap<n;i++)
	    {
	        if(arr[i]>arr[i+gap])
	        {
	            swap(arr[i],arr[i+gap]);
	        }
	    }
	    for(j=gap>n?gap-n:0;j<m && i<n;i++,j++)
	    {
	        if(arr[i]>arr2[j])
	        {
	            swap(arr[i],arr2[j]);
	        }
	      
	        
	        
	    }
	   //   	         for(int i=0;i<m;i++)
	   // {
	   //     cout<<"ARR@"<<arr2[i]<<" ";
	        
	   // }
	   // cout<<endl;
	    if(j<m)
	    {
	        for(j=0;j+gap<m;j++)
	        {
	             if (arr2[j] > arr2[j + gap])
	             {
	                
                    swap(arr2[j], arr2[j + gap]);
	             }
	        }
	 
	    }
	   
	   
	    
	    }
	   
	}
	
};class Solution{
public:
    void swap(int& a,int& b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
	void merge(int arr[], int arr2[], int n, int m) {
	    // code here
	    
	    int gap=m+n;
	    int i=0;
	    int j=0;
	    while(gap>1)
	    {
	    gap=int(ceil((float(gap)/2)));
	   // cout<<"gap"<<gap<<endl;
	    for(i=0;i+gap<n;i++)
	    {
	        if(arr[i]>arr[i+gap])
	        {
	            swap(arr[i],arr[i+gap]);
	        }
	    }
	    for(j=gap>n?gap-n:0;j<m && i<n;i++,j++)
	    {
	        if(arr[i]>arr2[j])
	        {
	            swap(arr[i],arr2[j]);
	        }
	      
	        
	        
	    }
	   //   	         for(int i=0;i<m;i++)
	   // {
	   //     cout<<"ARR@"<<arr2[i]<<" ";
	        
	   // }
	   // cout<<endl;
	    if(j<m)
	    {
	        for(j=0;j+gap<m;j++)
	        {
	             if (arr2[j] > arr2[j + gap])
	             {
	                
                    swap(arr2[j], arr2[j + gap]);
	             }
	        }
	 
	    }
	   
	   
	    
	    }
	   
	}
	
};
