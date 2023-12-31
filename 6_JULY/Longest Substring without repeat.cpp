class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string res="";
        unordered_map<char,int>mp;
        int i=0,ans=0;
        while(i<s.size())
        {
            while(i<s.size() && (mp.find(s[i])==mp.end() || mp[s[i]]==0) )
            {
                res=res+s[i];
                mp[s[i]]++;
                int size=res.size();
                ans = max(ans,size);
                i++;
            }
            if(i<s.size()){
            while( mp[s[i]]!=0)
            {
                 mp[res[0]]--;
                if(res.size()>=2)
                  res=res.substr(1,res.size());
                else
                    res="";
            }
            res=res+s[i];
            mp[s[i]]++;
                i++;
            }
        }
        return ans;
    }
};
