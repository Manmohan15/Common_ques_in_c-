bool find3Numbers(int arr[], int N, int X)
{
    //Your Code Here
    sort(arr,arr+N);
    for(int i=0;i<N-2;i++)
    {
        int t=X-arr[i];
        int start=i+1;
        int end=N-1;
        while(start<end)
        {
            if(arr[start]+arr[end]==t)
            {
                return true;
            }
            else if(arr[start]+arr[end]>t)
            {
                end=end-1;
            }
            else if(arr[start]+arr[end]<t)
            {
                start+=1;
            }
        }
    }
    return false;
    
}
