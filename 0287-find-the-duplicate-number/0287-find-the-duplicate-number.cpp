class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int* arr=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            arr[nums[i]-1]+=1;
            if(arr[nums[i]-1]==2)
                return nums[i];
        }
        return -1;
    }
};