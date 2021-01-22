bool subArrayExists(int arr[], int n)
{
    //Your code here
    map<int,int>m;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum==0)
        {
            return true;
        }
        if(arr[i]==0)
        {
            return true;
        }
        if(m[sum]!=0)
        {
            return true;
        }
        m[sum]+=1;
    }
    return false;
    
}
