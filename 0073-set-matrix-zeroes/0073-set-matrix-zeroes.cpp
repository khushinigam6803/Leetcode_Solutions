class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.size()==0)
        return;
        int m=matrix.size(); //no of rows
        int n=matrix[0].size(); //no of columns
        vector<int> rowRep, colRep, rowInd, colInd;
        for(int i=0;i<m;i++)
        colRep.push_back(0);
        for(int i=0;i<n;i++)
        rowRep.push_back(0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    rowInd.push_back(i);
                    colInd.push_back(j);
                }
            }
        }
        for(int i=0;i<rowInd.size();i++)
        matrix[rowInd[i]]=rowRep;
        for(int i=0;i<colInd.size();i++)
        {
            for(int j=0;j<m;j++)
            {
                matrix[j][colInd[i]]=0;
            }
        }
        return;
    }
};