class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int cnt1=0,cnt2=0,el1,el2;
        for(auto it:nums)
        {
           
            if(el1==it)cnt1++;
            else if(el2==it)cnt2++;
            else if(cnt1==0)el1=it,cnt1++;
            else if(cnt2==0)el2=it,cnt2++;
            else cnt1--,cnt2--;
        }
        cout<<el1<<el2<<cnt1<<cnt2;

        int a=0,b=0;
        for(auto it:nums)
        {
            if(it==el1)a++;
            else if(it==el2)b++;
        }
        if(a>n/3)ans.push_back(el1);
        if(b>n/3)ans.push_back(el2);
        return ans;

        
    }
};
