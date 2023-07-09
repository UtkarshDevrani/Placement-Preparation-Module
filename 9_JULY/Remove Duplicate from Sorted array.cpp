class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
      for(int i=0; i<nums.size()-1 ;i++)
      {
          if(nums[i+1]!=nums[i])
          {
              nums[k]=nums[i+1];
              k++;
          }
          
      }
        return k;
    }
};