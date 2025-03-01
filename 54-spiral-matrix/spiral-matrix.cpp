class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int left=0;
        int right=m-1;
        int top=0;
        int bottom=n-1;
        vector<int> answer;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                answer.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                answer.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    answer.push_back(matrix[bottom][i]);
                }
            bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    answer.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return answer;
    }
};