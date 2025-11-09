class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string temp="";
        string answer="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push('(');
                temp+='(';
            }
            else if(s[i]==')'){
                st.pop();
                temp+=')';
                if(st.empty()){
                    int n=temp.size();
                    answer+=temp.substr(1,n-2);
                    temp="";
                }
            }
        }
        return answer;
    }
};