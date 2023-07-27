   int minPathSum(vector<vector<int>>& arr) {
       int m=arr.size();
       int n=arr[0].size();
       vector<int>prev(n,0);
       for(int i=0;i<m;i++)
       {
           vector<int>temp(n,0);
           for(int j=0;j<n;j++)
           {
               if(i==0 && j==0)temp[j]=arr[i][j];
               else if(i==0 && j>0)temp[j]=arr[i][j]+temp[j-1];
               else if(j==0 && i>0)temp[j]=arr[i][j]+prev[j];
               else{
                   temp[j]=arr[i][j] + min(prev[j],temp[j-1]);
               }
           }
           prev=temp;
       }
        return prev[n-1];
    }
};