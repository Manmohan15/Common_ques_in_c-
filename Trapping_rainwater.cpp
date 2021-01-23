int trappingWater(int arr[], int n){

    // Your code here
    int temp=0;
    int water=0;
    int maxheight=arr[0];
    int maxheight_index=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=maxheight)
        {
            water+=temp;
            temp=0;
            maxheight=arr[i];
            maxheight_index=i;
        }
        else
        {
            temp+=maxheight-arr[i];
            
        }
        
    }
    if(maxheight_index!=n-1)
    {  
        int max_rheight=arr[n-1];
        int j=n-1;
        while(j>maxheight_index)
        {
            if(arr[j]>max_rheight)
            {
                max_rheight=arr[j];
            }
            else if(arr[j]<=max_rheight)
            {
            water+=max_rheight-arr[j];
            }
            j--;
        }
        
    }
    return water;
}
