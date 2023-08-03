class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1)
            return 0;
        int max=INT_MIN;
        int temp=0;
        int min=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<min)
                min=prices[i];
            temp=prices[i]-min;
            if(temp>max)
                max=temp;
        }
        return max;
    }
};