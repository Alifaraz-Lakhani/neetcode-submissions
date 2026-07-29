class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map <int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            int req=target-nums[i];
            if(mpp.find(req) != mpp.end()) {
                ans = {mpp[req], i};
                return ans;
            }
            else mpp[nums[i]] = i;
        }
        return ans;
    }
};