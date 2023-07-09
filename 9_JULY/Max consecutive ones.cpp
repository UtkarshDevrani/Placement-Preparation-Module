class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,ans=0;
        for(auto it:nums)
        {
            if(it==1)count++;
            else count=0;
            ans=max(ans,count);
        }
        return ans;
    }
};