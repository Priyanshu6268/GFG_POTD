class Solution {
  public:
  bool dfs(int i,int j,int k,vector<vector<int>>&vis,string &word,vector<vector<char>>& mat){
      if(k==word.length()) return true;
      vis[i][j]=1;
      vector<int> row={0,-1,0,1};
      vector<int> col={-1,0,1,0};
      bool chk=false;
      for(int w=0;w<4;w++){
          int nr=i+row[w];
          int nc=j+col[w];
          if(nr>=0&&nr<mat.size()&&nc>=0&&nc<mat[0].size()&&vis[nr][nc]==0&&word[k]==mat[nr][nc]){
              chk=chk||dfs(nr,nc,k+1,vis,word,mat);
          }
      }
      vis[i][j]=0;
      return chk;
      
  }
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code here
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==word[0]){
                    vector<vector<int>> vis(n,vector<int>(m,0));
                    bool chk=dfs(i,j,1,vis,word,mat);
                    if(chk) return true;
                }
            }
        }
        return false;
    }
};
