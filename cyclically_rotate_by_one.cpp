
void reverse(int arr[],int l,int r)
{ 
    int start=l;
    int end=r;
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start+=1;
        end-=1;
    }
}
void rotate(int arr[], int n)
{
   
    
    
    reverse(arr,0,n-2);
    reverse(arr,0,n-1);
    
    
}
