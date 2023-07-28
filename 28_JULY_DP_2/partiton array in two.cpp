
class Solution {
public:
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
//     int minimumDifference(vector<int>& nums) {
//         int n=nums.size();
//    if(n==1)return nums[0];
//         int sum=0;
//         for(int i=0;i<n;i++)sum+=nums[i];

//   vector < vector < int >> dp(n, vector < int > (sum + 1, -1));
//         for(int i=0;i<=sum;i++)
//         {
//             bool dummy=solve(nums,dp,n-1,i);
//         }
//         int ans=INT_MAX;
//         for(int i=0;i<=sum;i++)
//         {
//             if(dp[n-1][i]==true)
//             {
//                 int diff=abs(i-(sum-i));
//                 ans=min(ans,diff);
//             }
//         }
//         return ans;
        
//     }

int minimumDifference(vector<int>& nums) {
   int n=nums.size();
   if(n==1)return nums[0];
        int sum=0;
        for(int i=0;i<n;i++)sum+=nums[i];

  vector < vector < bool >> dp(n, vector < bool > (sum + 1, false));
  for(int i=0;i<n;i++)
  {
      dp[i][0]=true;
  }
         if(nums[0]<=sum)dp[0][nums[0]]=true;
            for(int ind=1;ind<n;ind++)
            {
                for(int target=1;target<=sum;target++)
                {
                     bool not_take=dp[ind-1][target];
                     bool take=false;
                     if(nums[ind]<=target)take=dp[ind-1][target-nums[ind]];
                     dp[ind][target]=take||not_take;

                }
            }
        int ans=INT_MAX;
        for(int i=0;i<=sum;i++)
        {
            if(dp[n-1][i]==true)
            {
                int diff=abs(i-(sum-i));
                ans=min(ans,diff);
            }
        }
        return ans;
        
    }
};