class Solution {
public:
int solve(vector<vector<int>>&dp,vector<int>&arr,int ind,int t)
{
    if(ind==0)
    {
        if(t%arr[0]==0)return 1;
        else return 0;
    }
    if(t==0)return 1;

    if(dp[ind][t]!=-1)return dp[ind][t];
    int not_take=solve(dp,arr,ind-1,t);
    int take=0;
    if(arr[ind]<=t)take=solve(dp,arr,ind,t-arr[ind]);
    return dp[ind][t]=take+not_take;

}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return solve(dp,coins,n-1,amount);
        
    }
};