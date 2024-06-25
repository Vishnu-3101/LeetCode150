class Solution {
public:
    int f(int r,int c,vector<vector<int>>&grid,vector<vector<int>>&dp){
        if(r>=grid.size() || c>=grid[0].size()) return -1e6;
        if(dp[r][c]!=-1e6) return dp[r][c];
        int ans = -1e6;
        for(int i=r+1;i<grid.size();i++){
            ans = max(ans,max(f(i,c,grid,dp),0)+(grid[i][c]-grid[r][c]));
        }
        for(int i=c+1;i<grid[0].size();i++){
            ans = max(ans,max(f(r,i,grid,dp),0)+(grid[r][i]-grid[r][c]));
        }
        return dp[r][c]=ans;
    }
    
    int maxScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxi = INT_MIN;
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1e6));
        for(int r=m-1;r>=0;r--){
            for(int c=n-1;c>=0;c--){
                int ans = -1e6;
                for(int i=r+1;i<grid.size();i++){
                    ans = max(ans,max(dp[i][c],0)+(grid[i][c]-grid[r][c]));
                }
                for(int i=c+1;i<grid[0].size();i++){
                    ans = max(ans,max(dp[r][i],0)+(grid[r][i]-grid[r][c]));
                }
                dp[r][c]= max(dp[r][c],ans);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                maxi = max(maxi,dp[i][j]);
            }
        }
        return maxi;
    }
};