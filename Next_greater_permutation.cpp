class Solution {
public:
    void reverse(vector<int>& nums,int start,int end)
    {
        while(start<end)
        {
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
        return;
    }
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1)
        {
            return;
        }
        int k=nums.size()-2;
        while(k>=0 and nums[k]>=nums[k+1])
        {
            k--;
        }
        if(k==-1)
        {
            reverse(nums,0,nums.size()-1);
            return;
        }
        int l=nums.size()-1;
        while(l>k and nums[l]<=nums[k])
        {
            l--;
            
        }
        int temp=nums[k];
        nums[k]=nums[l];
        nums[l]=temp;
        reverse(nums,k+1,nums.size()-1);
        return;
        
    }
};
