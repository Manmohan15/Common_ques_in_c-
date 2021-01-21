class Solution {
public:
    //   int sum(vector<int>& nums)
    // {
    //     int sum=0;
    //     for(auto i=nums.begin();i!=nums.end();i++)
    //     {
    //         sum+=*i;
    //     }
    //     return sum;
    // }
    int findDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(auto it=nums.begin();it!=nums.end();it++)
        {
            if(m[*it]>0)
            {
                return *it;
            }
            else
            {
                m[*it]++;
            }
        }
        return -1;
            
        
    }
};
