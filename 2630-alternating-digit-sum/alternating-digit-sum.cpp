class Solution {
public:
    int alternateDigitSum(int n) {
        string s=to_string(n);
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(i%2!=0){
                int num=-1*(s[i]-'0');
                sum+=num;
            }
            else{
                sum+=s[i]-'0';
            }
        }
        return sum;
    }
};