class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = prices[0];
        int maxProfit = 0;

        for(int i = 1; i<prices.size(); i++){
            //int cost = prices[i] - minn;
            maxProfit = max(maxProfit, prices[i] - minn);
            minn = min(minn, prices[i]);
        }

        return maxProfit;
    }
};