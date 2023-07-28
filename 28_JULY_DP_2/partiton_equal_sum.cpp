class Solution {
public:
//MEMOIZATION
// bool solve(vector<int>&arr,vector<vector<int>>&dp,int ind,int sum)
// {
//     if(sum==0)return true;
//     if(ind==0)return arr[0]==sum;
//     if(dp[ind][sum]!=-1)return dp[ind][sum];
//     bool not_take=solve(arr,dp,ind-1,sum);
//     bool take=false;
//     if(arr[ind]<=sum)take=solve(arr,dp,ind-1,sum-arr[ind]);
//     return dp[ind][sum]=take||not_take;
// }
//     bool canPartition(vector<int>& nums) {
//         int n=nums.size();
//         int sum=0;
//         for(int i=0;i<n;i++)sum+=nums[i];
//         if(sum%2!=0)return false;
//         int k=sum/2;
//         vector<vector<int>>dp(n,vector<int>(k+1,-1));
//         return solve(nums,dp,n-1,k);
        
//     }
//TABULATION

    //  bool canPartition(vector<int>& nums) {
    //     int n=nums.size();
    //     int sum=0;
    //     for(int i=0;i<n;i++)sum+=nums[i];
    //     if(sum%2!=0)return false;
    //     int k=sum/2;
    //     vector<vector<bool>>dp(n,vector<bool>(k+1,false));
    //     for(int i=0;i<n;i++)
    //     {
    //         dp[i][0]=true;
    //     }
    //     if(nums[0]<=k)dp[0][nums[0]]=true;
    //     for(int ind=1;ind<n;ind++)
    //     {
    //         for(int target=1;target<=k;target++)
    //         {
    //             bool not_take=dp[ind-1][target];
    //             bool take=false;
    //             if(nums[ind]<=target)take=dp[ind-1][target-nums[ind]];
    //             dp[ind][target]=take || not_take;

    //         }
    //     }
    //     return dp[n-1][k];
    // }

         bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)sum+=nums[i];
        if(sum%2!=0)return false;
        int k=sum/2;
        vector<bool>dp(k+1,false);
        dp[0]=true;
        if(nums[0]<=k)dp[nums[0]]=true;
        for(int ind=1;ind<n;ind++)
        {
            vector<bool>curr(k+1,false);
            curr[0]=true;
            for(int target=1;target<=k;target++)
            {
                bool not_take=dp[target];
                bool take=false;
                if(nums[ind]<=target)take=dp[target-nums[ind]];
                curr[target]=take || not_take;

            }
            dp=curr;

        }
        return dp[k];
    }
};