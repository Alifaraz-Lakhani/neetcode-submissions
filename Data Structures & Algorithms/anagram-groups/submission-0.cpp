class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int> , vector<string>> mpp;
        for(int i=0; i< strs.size(); i++){
            vector<int> a (26, 0);
            for(int j=0; j<strs[i].size(); j++) a[strs[i][j]-'a']++;
            mpp[a].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto p : mpp) ans.push_back(p.second);
        return ans;
    }
};