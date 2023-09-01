class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int n=intervals.size();
        for(int i=0;i<n;i++)
        {
            if(i==0)
            ans.push_back(intervals[i]);
            if(ans[ans.size()-1][0]<=intervals[i][0]&&ans[ans.size()-1][1]>=intervals[i][1])
            {
                continue;
            }
            else if(ans[ans.size()-1][1]>=intervals[i][0])
            {
                ans[ans.size()-1][1]=intervals[i][1];
            }
            else 
            {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};