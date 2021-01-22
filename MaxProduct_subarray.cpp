#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    long long max(long long a,long long b)
    {
        return a>b?a:b;
    }
     long long min(long long a,long long b)
    {
        return a>b?b:a;
    }

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long max_product=1;
	    long long max_positive=0;
	    long long max_negative=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==0)
	        {
	             
	    max_positive=0;
	    max_negative=0;
	            
	        }
	        else if(arr[i]>0)
	        {
	            max_positive=max(max_positive*arr[i],arr[i]);
	            max_negative=max_negative*arr[i];
	            max_product=max(max_positive,max_product);
	        }
	        else if(arr[i]<0)
	        {   
	 
	            long long temp=max_positive;
	            max_positive=max(max_negative*arr[i],0);
	            max_negative=min(temp*arr[i],arr[i]);
	            
	            max_product=max(max_product,max_positive);
	        }
	    }
	    return max_product;
	}
};
