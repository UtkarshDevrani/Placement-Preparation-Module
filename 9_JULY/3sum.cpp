class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        int count=0,n=nums.size(),i=0;
        while(i<n)
        {
            int s=i+1,e=n-1;
            while(s<e)
            {
                if(nums[s]+nums[e]==-nums[i])
                {
                    v.push_back({nums[i],nums[s],nums[e]});
                    e--;s++;
                    while(s<e && nums[e]==nums[e+1])e--;
                    while(s<e && nums[s]==nums[s-1])s++;
                }
                else if(nums[s]+nums[e]>-nums[i])e--;
                else s++;
            }
            i++;
            while(i<n && nums[i]==nums[i-1])i++;
        }
        cout<<count;
        return v;
    }
};