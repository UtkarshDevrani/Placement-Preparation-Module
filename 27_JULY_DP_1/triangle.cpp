class Solution {
public:
//memoization
    // int solve(vector<vector<int>>&arr,vector<vector<int>>&dp,int n,int i,int j)
    // {
    //     if(i==n-1)return arr[n-1][j];
    //     if(dp[i][j]!=-1)return dp[i][j];
    //     int d=arr[i][j]+solve(arr,dp,n,i+1,j);
    //     int dg=arr[i][j]+solve(arr,dp,n,i+1,j+1);
    //     return dp[i][j]=min(d,dg);
    // }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(triangle,dp,n,0,0);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++)
        {
            dp[n-1][i]=triangle[n-1][i];
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                dp[i][j]=triangle[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
            }
        }
        return dp[0][0];
    }
};