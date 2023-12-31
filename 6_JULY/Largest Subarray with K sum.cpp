class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        mp[0]=1;
        int sum=0,res=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            auto it=mp.find(sum-k);
            if(it!=mp.end())
            {
                res=res+mp[sum-k];
            }
            mp[sum]+=1;
        }
        
        return res;
        
    }
};