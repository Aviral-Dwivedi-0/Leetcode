class Solution {
public:
    bool isValid(string s) {
        stack<char> checker;
        checker.push(s[0]);
        for(int i=1;i<s.size();i++){
            char curr=s[i];
            switch(curr){
                case ')':
                    if(!checker.empty() && checker.top()=='(') {
                        checker.pop();
                        break;
                    }
                    else return false;
                case '}':
                    if(!checker.empty() && checker.top()=='{') {
                        checker.pop();
                        break;
                    }
                    else return false;
                case ']':
                    if(!checker.empty() && checker.top()=='[') {
                        checker.pop();
                        break;
                    }
                    else return false;
                default:
                    checker.push(curr);
            }
        }
        if(checker.empty()) return true;
        return false;
    }
};