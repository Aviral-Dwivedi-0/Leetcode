class Solution {
public:
    string largestOddNumber(string num) {
        int nl=num.size();
        int count=0;
        while(num!=""){
            int temp;
            int si=num.size();
            char c=num[si-1];
            temp=c-'0';
            if(temp%2!=0){
                break;
            }
            count++;
            num.erase(num.begin()+si-1,num.end());
        }
        if(count==nl){
            return "";
        }
        string ans="";
        for(int i=0;i<nl-count;i++){
            ans+=num[i];
        }
        return ans;
    }
};