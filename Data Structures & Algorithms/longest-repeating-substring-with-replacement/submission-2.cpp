class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int l=0, maxf=0, right=0, left=0, maxl=0;
        unordered_map<char, int> mpp;
        while(right<n){
            l++;
            mpp[s[right]]++;
            maxf=max(maxf, mpp[s[right]]);
            if(l-maxf > k){
                mpp[s[left]]--;left++;l--;
            }
            right++;
            maxl=max(maxl, right-left);
        }
        return maxl;
    }
};
