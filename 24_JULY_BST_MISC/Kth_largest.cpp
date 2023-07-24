class Solution {
public:
int count(int n,int num,vector<int>&nums)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]<=num)cnt++;
    }
    return cnt;
}
int solve(int n,int k,vector<int>&nums,int low,int high)
{
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        int c1=count(n,mid,nums);
        if(c1<k)low=mid+1;
        else
        {
            c1=count(n,mid-1,nums);
            if(c1<k)return mid;
            high=mid-1;
        }
    }
    return -1;
}
    int findKthLargest(vector<int>& nums, int k) {
        int low=INT_MAX,high=INT_MIN;
        int n=nums.size();
        for(auto it:nums)
        {
            low=min(low,it);
            high=max(high,it);
        }
        return solve(n,n-k+1,nums,low,high);
        
    }
};