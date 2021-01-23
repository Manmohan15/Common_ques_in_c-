
int sb(int arr[], int n, int X)
{
    // Your code goes here 
    int start=0;
    int end=0;
    int min_diff=INT_MAX;
    while(end<n && start<n)
    {
        int sum=0;
        while(sum<=X && end<n)
        {
            sum+=arr[end];
            end++;
        }
        // cout<<"a"<<start<<" "<<end<<" "<<sum<<endl;
        if(sum>X)
        {
            if(end-start<min_diff)
            {
            //   cout<<start<<" "<<end<<endl;  
                min_diff=end-start;
                
                
                
            }
        }    
            sum=0;
            end=start+1;
            start+=1;
        
        
    }
    return min_diff;
}
