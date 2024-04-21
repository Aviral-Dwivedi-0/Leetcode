class Solution {
public:
    string convertToBase7(int num) {
        string ans="";
        int sign=1;
        if(num==0) return "0";
        if(num<0){
            sign=-1;
            num=num*-1;
        }
        while(num>0){
            int rem=num%7;
            num=num/7;
            ans=to_string(rem)+ans;
        }
        if(sign==1)
        return ans;
        else return "-"+ans;
    }
};