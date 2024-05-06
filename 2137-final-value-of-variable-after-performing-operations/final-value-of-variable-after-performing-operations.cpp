class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int answer=0;
        for(int i=0;i<operations.size();i++){
            string en=operations[i];
            if(en=="--X" || en=="X--"){
                answer--;
            }
            else{
                answer++;
            }
        }
        return answer;
    }
};