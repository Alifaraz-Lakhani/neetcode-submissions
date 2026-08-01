class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        int l=0, r=matrix.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(target>=matrix[mid][0] && target<=matrix[mid][n-1]){
                int left=0, right=n-1;
                while(left<=right){
                    int m=left+(right-left)/2;
                    if(matrix[mid][m] == target) return true;
                    else if(target<matrix[mid][m]) right=m-1;
                    else left=m+1;
                }
                return false;
            }
            else if (target<matrix[mid][0]) r=mid-1;
            else l=mid+1;
        }
        return false;
    }
};
