
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        int curr=0;
        for(int i=0;i<nums.size();i++)
        {
            curr=std::max(nums[i], nums[i]+curr);
            max=std::max(max, curr);
        }
        return max;

    }
};