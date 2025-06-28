class Solution {
public:
    string winningPlayer(int x, int y) {
        int yrem=y/4;
        int mini=min(x,yrem);
        if(mini%2!=0) return "Alice";
        return "Bob";
    }
};