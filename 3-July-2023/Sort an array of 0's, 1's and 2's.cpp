class Solution {
public:
    void sortColors(vector<int>& nums) {
     int i=0,mid=0,h=nums.size()-1;
        while(mid<=h)
        {
            if(nums[mid]==0)
            {
                swap(nums[i],nums[mid]);
                i++;
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[h]);
                h--;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
        }
    }
};