class Solution {
public:
    int xorOperation(int n, int start) {
        int answer=start;
        int i=1;
        while(i<n){
            start+=2;
            answer^=start;
            i++;
        }
        return answer;
    }
};