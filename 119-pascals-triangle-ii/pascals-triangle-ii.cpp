class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> answer(rowIndex+1);
        for(int i=0;i<=rowIndex;i++){
            for(int j=0;j<i+1;j++){
                if(j==0 || j==i){
                    answer[i].push_back(1);
                }
                else{
                    answer[i].push_back(answer[i-1][j-1]+answer[i-1][j]);
                }
            }
        }
        return answer[rowIndex];
    }
};