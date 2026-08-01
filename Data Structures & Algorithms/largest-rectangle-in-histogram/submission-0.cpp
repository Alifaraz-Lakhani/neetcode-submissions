class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int, int>> st;
        int maxArea;
        for(int i=0; i<heights.size();i++){
            if(st.empty()) {
                st.push({i, heights[i]});
                maxArea=heights[i];
            }
            else{
                if(heights[i] > st.top().second){
                    st.push({i, heights[i]});
                }
                else{
                    int newi=i;
                    while(!st.empty() && st.top().second>heights[i]){
                        pair<int, int> temp=st.top(); st.pop();
                        maxArea = max(maxArea, temp.second * (i - temp.first));
                        newi=temp.first;
                    }
                    st.push({newi, heights[i]});
                }
            }
        }
        while(!st.empty()){
            auto p=st.top(); st.pop();
            maxArea = max(maxArea, ((int)heights.size() - p.first) * p.second);
        }
        return maxArea;
    }
};
