class Solution {
public:
     bool bin_search(vector<int>&v,int target)
    {
        int start=0;
        int end=v.size()-1;
       
        
        if(v[start]==target  || v[end]==target)
        {
            return true;
        }
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(v[mid]==target)
            {
                return true;
            }
            else if(v[mid]>target)
            {
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& v, int target) {
        for(int i=0;i<v.size();i++)
        {
            if( v[i].size()>0 and v[i][0]<=target and v[i][v[0].size()-1]>=target)
            {
                if(bin_search(v[i],target)==true)
                {
                    return true;
                }
            }
        }
        return false;
    }
    
};
