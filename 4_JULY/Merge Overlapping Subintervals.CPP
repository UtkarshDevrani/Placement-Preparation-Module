class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>v;
        vector<int>t=intervals[0];
        if(intervals.size()==0)
        {
            return v;
        }
        for(int i=0;i<intervals.size();i++)
        {
            if(t[1]>=intervals[i][0])
            {
                t[1]=max(t[1],intervals[i][1]);
            }
            else
            {
                v.push_back(t);
                t=intervals[i];
            }
        }
        v.push_back(t);
        
     return v;
    }
};