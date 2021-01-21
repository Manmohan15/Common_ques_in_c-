class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        map<int,int>m;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(m[k-arr[i]]!=0)
            {
                count+=m[k-arr[i]];
                m[arr[i]]+=1;
            }
            else
            {
                m[arr[i]]+=1;
            }
        }
        return count;
    }
};
