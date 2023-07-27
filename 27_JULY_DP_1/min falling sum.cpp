class Solution {
public:
int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int ans=INT_MAX;
        vector<vector<int>>dp(m,vector<int>(n,INT_MAX));
        for(int i=0;i<n;i++)
        {
            dp[0][i]=matrix[0][i];
        }
        for(int i=1;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int u=matrix[i][j],ld=1e9,rd=1e9;
                u+=dp[i-1][j];
                if(j-1>=0)ld=dp[i-1][j-1]+matrix[i][j];
                if(j+1<n)rd=dp[i-1][j+1]+matrix[i][j];
                dp[i][j]=min(u,min(ld,rd));
            }
        }
        for(int i=0;i<n;i++)
        {
            ans=min(ans,dp[m-1][i]);
        }
        return ans;
        
    }
};