class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mpp ={
            {']','['},
            {'}','{'},
            {')','('}
        };
        for(char c: s){
            if(c=='(' || c=='[' || c=='{') st.push(c);
            else{
                
                char m=mpp[c];
                if(!st.empty() && st.top()==m) st.pop();
                else return false;
            }
        }
        return st.empty()?true:false;
    }
};
