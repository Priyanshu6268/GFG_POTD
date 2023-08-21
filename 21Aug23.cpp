class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int n=matrix.size(),m=matrix[0].size();
int ans=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(matrix[i][j]==0)continue;
        int count=0;
        int x[]={-1,-1,-1,0,1,1,1,0};
        int y[]={-1 ,0,1,1,1,0,-1,-1};
        for(int k=0;k<8;k++){
            if(i+x[k]>=0 and i+x[k]<n and j+y[k]>=0 and j+y[k]<m)
                if(matrix[i+x[k]][j+y[k]]==0)count++;
        }
        if(count%2==0 && count!=0)ans++;
    }
}
return ans;
    }
};
