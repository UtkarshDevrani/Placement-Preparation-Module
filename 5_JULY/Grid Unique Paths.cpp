class Solution {
public:
 int uniquePaths(int m, int n) {
        vector<int>dp(n,0);
          for(int i=0;i<m;i++)
        {
            vector<int>arr(n,0);
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0)arr[j]=1;
                else
                {
                    int up=0,left=0;
                     up=dp[j];
                     if(j>0)left=arr[j-1];
                    arr[j]=up+left;
                }
            }
            dp=arr;
        }
        return dp[n-1];
    }
};