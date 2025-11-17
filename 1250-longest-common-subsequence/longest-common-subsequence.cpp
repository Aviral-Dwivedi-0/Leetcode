class Solution {
public:
    int dp[1001][1001];
    int check(string& text1, string& text2, int i,int j){
        if(i<0 || j<0) return 0;
        else if(dp[i][j]!=-1) return dp[i][j];
        else if(text1[i]==text2[j]){
            dp[i][j]=1+check(text1,text2,i-1,j-1);
            return dp[i][j];
        }
        else{
            dp[i][j]= max(check(text1,text2,i-1,j),check(text1,text2,i,j-1));
            return dp[i][j];
        }
        
        
    }
    int longestCommonSubsequence(string text1, string text2) {
        int s1=text1.size()-1;
        int s2=text2.size()-1;
        
        
        memset(dp,-1,sizeof(dp));
        int answer=check(text1,text2,s1,s2);
        return answer;
    }
};