class Solution {
public:
int solve(int ind, int target, vector<int>& arr, vector<vector
<int>> &dp){

     if(ind == 0){
        if(target==0 && arr[0]==0)
            return 2;
        if(target==0 || target == arr[0])
            return 1;
        return 0;
    }
    
    if(dp[ind][target]!=-1)
        return dp[ind][target];
        
    int notTaken =solve(ind-1,target,arr,dp);
    
    int taken = 0;
    if(arr[ind]<=target)
        taken = solve(ind-1,target-arr[ind],arr,dp);
        
    return dp[ind][target]= (notTaken + taken);
}
    int findTargetSumWays(vector<int>& arr, int target) {
           int sum=0,n=arr.size();
        for(int i=0;i<n;i++)sum+=arr[i];
       
       if(sum-abs(target)<0 || (sum-target)%2==1)return 0;
       int s2=(sum-target)/2;
        vector<vector<int>>dp(n,vector<int>(sum+2,-1));
       return solve(n-1,s2,arr,dp);
    }
};