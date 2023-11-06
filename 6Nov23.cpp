class Solution {
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[]) {
        vector<int> out;
        
        for(int k = 0; k < q; ++k){
            int sum = 0;
            int hop = queries[k][0];
            int x = queries[k][1];
            int y = queries[k][2];
            
            for(int i = x - hop; i <= x + hop; ++i){
                if(i >= 0 && i < n){
                    if(y - hop >= 0)
                        sum += mat[i][y - hop];
                    if(y + hop < m)
                        sum += mat[i][y + hop];
                }
            }
                
            for(int i = y - hop + 1; i < y + hop; ++i){
                if(i >= 0 && i < m){
                    if(x - hop >= 0)
                        sum += mat[x - hop][i];
                    if(x + hop < n)
                        sum += mat[x + hop][i];
                }
            }
                
            out.push_back(sum);
        }
        return out;
    }
};
