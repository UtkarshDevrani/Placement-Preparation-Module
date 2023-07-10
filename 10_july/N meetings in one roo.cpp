class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int s[], int e[], int n)
    {
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({e[i],s[i]});
        }
        sort(v.begin(),v.end());
        int temp=-1,count=0;
        for(int i=0;i<n;i++)
        {
            if(v[i].second>temp)
            {
                count++;
                temp=v[i].first;
            }
        }
        return count;
        // Your code here
    }
};