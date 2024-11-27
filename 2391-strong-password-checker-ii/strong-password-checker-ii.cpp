class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int l=password.size();
        if(l<8) return false;
        bool lower=false;
        bool upper=false;
        bool digit=false;
        bool special=false;
        for(int i=0;i<l;i++){
            if(i!=0){
                if(password[i]==password[i-1]) return false;
            }
            if(password[i]>=97 && password[i]<=122) lower=true;
            else if(password[i]>=65 && password[i]<=90) upper=true;
            else if(password[i]>=48 && password[i]<=57) digit=true;
            else if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='%' || password[i]=='^' || password[i]=='&' || password[i]=='*' || password[i]=='(' || password[i]==')' || password[i]=='-' || password[i]=='+' ) special=true;
        }
        return lower && upper && digit &&  special;
    }
};