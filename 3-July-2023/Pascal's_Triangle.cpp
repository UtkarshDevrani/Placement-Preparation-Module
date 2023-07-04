class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        vector<int>prev;
        prev.push_back(1);
        ans.push_back(prev);
        for(int i=1;i<n;i++)
        {
            vector<int>curr;
            curr.push_back(1);
            for(int j=1;j<prev.size();j++)
            {
                int val=prev[j]+prev[j-1];
                curr.push_back(val);
            }
            curr.push_back(1);
            prev=curr;
            ans.push_back(curr);
        }
        return ans;
    }
};