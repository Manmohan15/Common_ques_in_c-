
class Solution{   
public:
    void swap(int& a,int& b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    void threeWayPartition(vector<int>& arr,int a, int b)
    {
        // code here 
        int i,j,k;
        i=j=0;
        k=arr.size()-1;
        while(j<=k)
        {
            if(arr[j]<a)
            {
                swap(arr[i],arr[j]);
                // cout<<arr[i]<<arr[j]<<endl;
                i++;
                j++;
            }
            else if(arr[j]>b)
            {
                swap(arr[j],arr[k]);
                // cout<<arr[j]<<arr[k]<<endl;
                k--;
            }
            else
            {
                j++;
            }
        }
        // for(int d=0;d<arr.size();d++)
        // {
        //     cout<<arr[d]<<" ";
        // }
        // cout<<endl;
    }
};
