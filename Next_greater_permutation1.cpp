class Solution{
public:
    void swap(int &a,int &b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    void reverse(vector<int>&arr,int start,int end)
    {
        while(start<end)
        {
            swap(arr[start],arr[end]);
            start+=1;
            end-=1;
        }
    }
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int k=N-2;
        while(k>=0){
            if(arr[k]>=arr[k+1])
            {
                k--;
            }
            else
            {
                break;
            }
        }
        if(k==-1)
        {
            reverse(arr,0,N-1);
            return arr;
        }
        int l=0;
        for(l=N-1;l>=0 && arr[l]<=arr[k];l--)
        {
        }
            swap(arr[k],arr[l]);
            reverse(arr,k+1,N-1);
    
        return arr;
    }
};
