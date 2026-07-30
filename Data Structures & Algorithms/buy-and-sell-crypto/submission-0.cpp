class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int n=prices.size();
        int maxi=0;
        for(int i=0; i<n; i++){
            if(prices[i]<prices[l]) l=i;
            else{
                int p=prices[i]-prices[l];
                maxi=max(maxi,p);
            }
        }
        return maxi;
    }
};
