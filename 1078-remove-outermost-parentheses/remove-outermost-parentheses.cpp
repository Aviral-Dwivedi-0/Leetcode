class Solution {
public:
    string removeOuterParentheses(string s) {
        set<int> removal;
        int counter=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' && counter==0){
                removal.insert(i);
                counter++;
            }
            else if(s[i]==')' && counter==1){
                removal.insert(i);
                counter--;
            }
            else if(s[i]=='(') counter++;
            else counter--;
        }
        string answer="";
        for(int i=0;i<s.size();i++){
            if(removal.find(i) == removal.end()){
                answer+=s[i];
            }
        }
        return answer;
    }
};