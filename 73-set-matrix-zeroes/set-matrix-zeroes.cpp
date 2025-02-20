class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rows;
        set<int>columns;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    rows.insert(i);
                    columns.insert(j);
                }
            }
        }
        for(auto i:rows){
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto i:columns){
            cout<<i<<" ";
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(rows.find(i)!=rows.end()){
                    matrix[i][j]=0;
                    continue;
                }
                if(columns.find(j)!=columns.end()){
                    matrix[i][j]=0;
                }
            }
        }
    }
};