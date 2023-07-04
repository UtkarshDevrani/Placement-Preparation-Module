class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int pre_min=999999,ans=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<pre_min)
            {
                pre_min=prices[i];
            }
            ans=max(ans,prices[i]-pre_min);
        }
        return ans;
    }
};