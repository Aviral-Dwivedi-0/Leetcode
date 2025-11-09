class Solution {
public:
    bool rotateString(string s, string goal) {
        int ol=s.size();
        int gl=goal.size();
        if(ol!=gl) return false;
        int counter=ol;
        while(counter>0){
            char temp=s[0];
            s=s.substr(1,ol);
            s+=temp;
            if(s==goal) return true;
            counter--;
        }
        return false;
    }
};