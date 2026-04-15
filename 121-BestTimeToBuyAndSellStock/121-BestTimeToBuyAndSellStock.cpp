// Last updated: 4/15/2026, 10:48:23 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int maxdiff=0;
        int profit =0;
       for(int i=0;i<prices.size();i++){
        if(prices[i]>min){
            int profit =prices[i]-min;
            maxdiff =max(profit,maxdiff);

        }else{
            min=prices[i];
        }
        } return maxdiff;
    }
};