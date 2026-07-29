class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = prices[0];
        int maxm = 0;
        for(int i = 1; i<prices.size(); i++){
            buy = min(buy, prices[i-1]);
            int profit = prices[i] - buy;
            maxm = max(maxm, profit);
        }
        return maxm;
    }
};
