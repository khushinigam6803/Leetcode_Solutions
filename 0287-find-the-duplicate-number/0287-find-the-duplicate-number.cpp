class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int* arr=new int[nums.size()];
        for(int i=0;i<nums.size();i++)
        arr[i]=0;
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
            if(arr[nums[i]]==2)
            return nums[i];
        }
        return -1;
    }
};