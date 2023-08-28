class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1)
        return 0;
        int temp=0;
        int mini=INT_MAX;
        int maxi=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<mini)
            mini=prices[i];
            temp=prices[i]-mini;
            if(temp>maxi)
            maxi=temp;
        }
        return maxi;
    }
};