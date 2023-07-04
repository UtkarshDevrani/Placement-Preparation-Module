class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int s=0,e=0;
        int n=mat.size();
        while(s!=n-1)
        {
                for(int j=e;j<n;j++)
                {
                    swap(mat[s][j],mat[j][s]);
                }
            s++;
            e++;
        }
        for(int i=0;i<n;i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }   
    }
};