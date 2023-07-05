class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col=matrix[0].size();
        int total=matrix.size()*col;
        int l=0,h=total-1,mid;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(matrix[mid/col][mid%col]==target)
            {
                return true;
            }
            else if(matrix[mid/col][mid%col]>target)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return false;
        
    }
};