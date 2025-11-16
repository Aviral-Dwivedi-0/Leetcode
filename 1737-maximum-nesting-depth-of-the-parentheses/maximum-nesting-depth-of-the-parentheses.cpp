class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int counter=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                counter++;
                maxi=max(counter,maxi);
            }
            else if(s[i]==')'){
                counter--;
            }
        }
        return maxi;
    }
};