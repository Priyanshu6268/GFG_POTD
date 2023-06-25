class Solution
{
    public:
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        vector<vector<int>> temp(row, vector<int>(col)), ans;
        for(int i = 0 ; i < row ; i++) {
            for(int j = 0 ; j < col ; j++) {
                temp[i][j] = M[i][j];
            }
        }
        map<vector<int>, int> m;
        for(auto i : temp) {
            m[i]++;
        }
        for(auto i : temp) {
            if(m[i]) {
                ans.push_back(i);
                m[i] = 0;
            }
        }
        return ans;
    }
};
