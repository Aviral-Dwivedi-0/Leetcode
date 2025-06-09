class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int counter=1;
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;
        vector<vector<int>> answer(n, vector<int>(n, 0));
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                answer[top][i]=counter++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                answer[i][right]=counter++;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    answer[bottom][i]=counter++;
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    answer[i][left]=counter++;
                }
                left++;
            }
        }
        return answer;
    }
};