class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(int i=0;i<details.size();i++){
            string sub=details[i].substr(11,2);
            if(stoi(sub)>60){
                count++;
            }
        }
        return count;
    }
};