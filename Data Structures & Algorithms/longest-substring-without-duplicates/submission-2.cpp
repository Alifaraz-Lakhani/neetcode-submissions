class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int n=s.size();
        int start=0, maxi=0;
        for(int i=0; i<n ;i++){
            if(mpp.find(s[i])!=mpp.end() && mpp[s[i]]>=start){
                start=mpp[s[i]]+1;
            }
            mpp[s[i]]=i;
            maxi=max(maxi, i-start+1);
        }
        return maxi;
    }
};
