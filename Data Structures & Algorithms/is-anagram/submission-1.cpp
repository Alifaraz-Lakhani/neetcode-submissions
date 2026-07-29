class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.size() != s.size()) return false;
        unordered_map<char, int> mpp;
        for(int i=0; i<s.size(); i++){
            if(mpp.find(s[i]) == mpp.end()) mpp[s[i]]=1;
            else mpp[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            if(mpp.find(t[i]) == mpp.end()) return false;
            else mpp[t[i]]--;
        }
        for(auto p : mpp){
            if(p.second != 0) return false;
        }
        return true;
    }
};
