int max(int a,int b)
{
    return (a>b)?a:b;
}
int minJumps(int arr[], int n){
    if(arr[0]==0)
    {
        return -1;
    }
    // Your code here
    int maxreach=arr[0];
    int step=arr[0];
    int jumps=1;
    for(int i=1;i<n;i++)
    {
        if(i==n-1)
        {
            return jumps;
        }
        maxreach=max(maxreach,arr[i]+i);
        step--;
        if(step==0)
        {
            jumps++;
            if(i>=maxreach)
            {
                return -1;
            }
            step=maxreach-i;
        }
