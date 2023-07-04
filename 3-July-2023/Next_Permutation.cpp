class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size()-1,s=-1,e;
        int i=n-1;
        while(i>=0)
        {
            if(nums[i]<nums[i+1])
            {
                s=i;
                break;
            }
            i--;
        }
        if(s==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        i=n;
        while(i>=s)
        {
            if(nums[i]>nums[s])
            {
                e=i;
                break;
            }
            i--;
        }
        swap(nums[s],nums[e]);
        reverse(nums.begin()+s+1,nums.end());
    }
};