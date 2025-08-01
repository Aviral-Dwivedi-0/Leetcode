class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=n-1;
        int j=0;
        while(i>=0 && j<m){
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]<target) j++;
            else i--;
        }
        return false;
    }
};