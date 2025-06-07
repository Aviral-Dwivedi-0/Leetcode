class Solution {
public:
    int myAtoi(string s) {
        while(s[0]==' '){
            s.erase(0,1);
        }
        int l=0;        
        if(s[0]=='-'){
            long long answer=0;
            for(int i=1;i<s.size();i++){
                if(s[i]<48 || s[i]>57) break;
                answer= answer*10+(s[i]-'0');
                if(log10(abs(answer))>11) return(pow(2,31)*-1);
            }
            answer*=-1;
            if(answer>= -1*(pow(2,31)))
            return answer;
            else return -1*(pow(2,31));
        }
        else{
            if(s[0]=='+') s.erase(0,1);
            long long answer=0;
            for(auto i:s){
                if(i<48 || i>57) break;
                answer= answer*10+(i-'0');
                if(log10(abs(answer))>11) return(pow(2,31)-1);
            }
            if(answer<pow(2,31))
            return answer;
            else return pow(2,31)-1;

        }
        return 0;
    }
};