//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<long long> findTwoElement(vector<int> nums, int n) {
        long long rn,mn,ts=0,s=n*(n+1)/2;
     for(int i=0;i<n;i++)
     {
         int ind=abs(nums[i]);
         ts+=ind;
         if(nums[ind-1]<0)rn=ind;
         else nums[ind-1]=nums[ind-1]*-1;
     }
     for(int it=0;it<n;it++)
     {
         if(nums[it]>0)
         {
             mn=it+1;
            break;
         }
     }
     
     return {rn,mn};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends