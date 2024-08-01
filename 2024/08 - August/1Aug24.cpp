class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        // code here
        int r=matrix.size();
        int c=matrix[0].size();
        vector<int> ans;
        int count=0;
        int total=r*c;
        int startingRow=0;
        int startingCol=0;
        int endingRow=r-1;
        int endingCol=c-1;
        while(count<total)
        {
            //Starting row;
            for(int index=startingCol;count<total && index<=endingCol;index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            //Ending column
            for(int index=startingRow;count<total && index<=endingRow;index++)
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            //Ending row
            for(int index=endingCol;count<total && index>=startingCol;index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            //Starting column
            for(int index=endingRow;count<total&& index>=startingRow;index--)
            {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};
