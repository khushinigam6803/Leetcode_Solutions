class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n=intervals.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            if(ans.size()==0||ans[ans.size()-1][1]<intervals[i][0])
            {
                ans.push_back(intervals[i]);
            }
            else
            {
                vector<int> temp;
                temp.push_back(min(ans[ans.size()-1][0], intervals[i][0]));
                temp.push_back(max(intervals[i][1], ans[ans.size()-1][1]));
                ans.erase(ans.end());
                ans.push_back(temp);
            }
        }
        return ans;
        
    }
};