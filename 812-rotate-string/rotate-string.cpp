class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal) return true;
        int ls=s.size();
        int gs=goal.size();
        if(ls!=gs) return false;
        int counter=0;
        while(counter<ls){
            char temp=s[0];
            s=s.substr(1,ls);
            s+=temp;
            if(s==goal) return true;
            counter++;
        }
        return false;
    }
};