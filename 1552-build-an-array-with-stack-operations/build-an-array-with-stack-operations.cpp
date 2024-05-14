class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int k=0;
        vector<string> answer;
        vector<int> current;
        for(int i=1;i<=n;i++){
            if(current==target){
                return answer;
            }
            if(i==target[k]){
                answer.push_back("Push");
                k++;
                current.push_back(i);
            }
            else{
                answer.push_back("Push");
                answer.push_back("Pop");
            }
        }
        return answer;
    }
};