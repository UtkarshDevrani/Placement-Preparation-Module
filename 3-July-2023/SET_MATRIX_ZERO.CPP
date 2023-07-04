class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int row=0,col=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                {
                    mat[0][j]=mat[i][0]=0;
                    if(i==0)row=1;
                    if(j==0)col=1;
                }
            }
        }
          for(int i=1;i<mat.size();i++)
        {
            for(int j=1;j<mat[0].size();j++)
            {
                if(mat[0][j]==0 || mat[i][0]==0)mat[i][j]=0;
            }
        }
        if(row==1)
        {
            for(int i=0;i<mat[0].size();i++)mat[0][i]=0;
        }
        if(col==1)
        {
             for(int i=0;i<mat.size();i++)mat[i][0]=0;
        }
    }
};