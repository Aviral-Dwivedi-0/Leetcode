class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> answer;
        int index=0;
        string temp="";
        for(auto i:s){
            temp+=i;
            index++;
            if(index==k){
                answer.push_back(temp);
                index=0;
                temp="";
            }
        }
        int n=temp.size();
        if(n==0) return answer;
        while(n<k){
            temp+=fill;
            n++;
        }
        answer.push_back(temp);
        return answer;
    }
};