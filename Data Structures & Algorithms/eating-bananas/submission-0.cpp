class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=piles.size();
        int low=1;
        int high=*max_element(piles.begin(), piles.end());
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            int hr=0;
            for(int i=0; i<piles.size(); i++){
                hr += (piles[i] + mid - 1) / mid;
            }
            if(hr>h) low=mid+1;
            else {
                high=mid-1;
                ans=min(ans, mid);
            }
        }
        return ans;
    }
};
