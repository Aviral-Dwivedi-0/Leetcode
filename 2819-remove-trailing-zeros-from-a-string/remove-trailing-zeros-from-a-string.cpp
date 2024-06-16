class Solution {
public:
    string removeTrailingZeros(string num) {
        string result;
        int l=num.size();
        for(int i=l-1;i>=0;i--){
            if(num[i]!='0'){
                result=num.substr(0,i+1);
                break;
            }
        }
        return result;
    }
};