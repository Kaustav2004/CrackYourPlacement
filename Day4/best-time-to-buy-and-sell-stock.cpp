class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int i=prices.size()-1;
        int maxi=-1;
        while(i>=0){
            if(prices[i]>maxi){
                maxi=prices[i];
            }
            int diff = maxi-prices[i];
            ans=max(ans,diff);
            i--;
        }
        return ans;
    }
};
