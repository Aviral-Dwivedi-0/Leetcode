class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int counter=0;
        int length=strs.size();
        int l=strs[0].size();
        for(int j=0;j<l;j++){
            for(int i=1;i<length;i++){
                if(strs[i][j]<strs[i-1][j]){
                    counter++;
                    break;
                }
            }
        }
        return counter;
    }
};