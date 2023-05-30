class Solution {
private:
    vector<int> dx={1,-1,0,0};
    vector<int> dy={0,0,1,-1};
public:

    bool dfs(vector<vector<char>> &b, int x, int y, string &word, int idx){
        if(idx==word.length()){
            return true;
        }
        if(word[idx]!=b[x][y]){
            return false;
        }
        char temp=b[x][y];
        b[x][y]='/';
        for(int i=0;i<4;i++){
            int nx=x+dx[i], ny=y+dy[i];
            
            if(nx>=0 && ny>=0 && nx<b.size() && ny<b[0].size() && dfs(b,nx,ny,word,idx+1)){
                b[x][y]=temp;
                return true;
            }
        }
        b[x][y]=temp;
        return false;
    }

    bool isWordExist(vector<vector<char>>& b, string word) {
        // Code here
        int n=b.size(), m=b[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dfs(b,i,j,word,0)){
                    return true;
                }
            }
        }
        
        return false;
    }
};
