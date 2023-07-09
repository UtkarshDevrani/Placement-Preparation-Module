class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1;
        int maxr=height[r],maxl=height[l];
            int res=0;
        
        while(l<=r)
        {
            if(maxl<=maxr)
            {
                if(height[l]<maxl)
                {
                    res=res+(maxl-height[l]);
                }
                else
                {
                    maxl=height[l];
                }
                l++;
                
            }
            else
            {
                 if(height[r]<maxr)
                {
                    res=res+(maxr-height[r]);
                }
                else
                {
                    maxr=height[r];
                }
                r--; 
            }
        }
        return res;
    }
};
