class Solution {
public:
    int minimumSum(int num) {
        string str=to_string(num);
        for(int i=0;i<str.size();i++){
            for(int j=0;j<str.size()-1;j++){
                if(str[j]>str[j+1]){
                    swap(str[j],str[j+1]);
                }
            }
        }
        string num1="";
        string num2="";
        num1=str[0];
        num1+=str[2];
        num2=str[1];
        num2+=str[3];
        return stoi(num1)+stoi(num2);
    }
};