class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(mp.find(nums[i]-1)!=mp.end())
            {
                mp[nums[i]]=0;
            }
        }
        int mx=0,length;
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]==1)
            {
                length=1;
                while(mp.find(nums[i]+length)!=mp.end())
                {
                    length++;
                }
            }
            mx=max(mx,length);
        }
        return mx;
    }
};