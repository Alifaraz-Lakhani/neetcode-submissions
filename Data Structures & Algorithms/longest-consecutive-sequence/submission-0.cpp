class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> s;
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        int maxlen=0;
        for(auto num:nums){
            if(s.contains(num-1)) continue;
            else{
                int start=num;
                int l=1;
                while(true){
                    if(s.contains(num+1)){
                        l++; num++;
                    }
                    else{
                        maxlen=max(maxlen, l);
                        break;
                    }
                }
            }
        }
        return maxlen;
    }
};
