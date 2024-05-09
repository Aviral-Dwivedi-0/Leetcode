class Solution {
public:
    string generateTheString(int n) {
        int i=1;
        string gen="";
        if(n%2==0){
            while(i<=n){
                if(i==n){
                    gen+="z";
                    return gen;
                }
                else{
                    gen+="p";
                    i++;
                }
            }
        }
        else{
            while(i<=n){
                gen+="p";
                i++;
            }
            return gen;
        }
        return "";
    }
};