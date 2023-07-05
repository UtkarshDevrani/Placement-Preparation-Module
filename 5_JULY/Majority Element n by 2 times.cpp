class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr=nums[0],count=0;
        for(auto it:nums)
        {
            if(it==curr)count++;
            else
            {
                if(count==0)curr=it,count++;
                else count--;
            }
        }
        return curr;
    }
};