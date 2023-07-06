class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        unordered_map<int,int>mp;
        int n=num.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(mp.find(target-num[i])!=mp.end())
            {
                v.push_back(i);
                v.push_back(mp[target-num[i]]);
                break;
            }
             mp[num[i]]=i;
        }
        return v;
    }
};