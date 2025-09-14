class Solution {
public:
    int maxDepth(string s) {
        int counter=0;
        int max_counter=0;
        for(auto i:s){
            if(i=='(') counter++;
            else if(i==')') counter--;
            max_counter=max(max_counter,counter);
        }
        return max_counter;
    }
};