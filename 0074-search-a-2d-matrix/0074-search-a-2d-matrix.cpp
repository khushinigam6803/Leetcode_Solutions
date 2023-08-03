class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        sort(matrix.begin(), matrix.end());
        int flag=-1;
        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][0]<=target&&matrix[i][matrix[0].size()-1]>=target)
            {
                flag=i; break;
            }
        }
        if(flag==-1)
            return false;
        if(binary_search(matrix[flag].begin(), matrix[flag].end(), target))
            return true;
        return false;
    }
};