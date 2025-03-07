class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int n=(right-1)/2;
        vector<int> result;
        vector<bool> mark(n+1,false);
        vector<int> answer;
        // memset(mark.begin(),false,sizeof(mark[0]));
        for(int i=1;i<=n;i++){
            for(int j=1;i+j+2*i*j<=n;j++){
                mark[i+j+2*i*j]=true;
            }
        }
        if(left<=2) answer.push_back(2);
        for (int i=1; i<=n; i++){
            if (mark[i] == false)
                // cout << 2*i + 1 << " ";
                if(2*i+1>=left)
                answer.push_back(2*i+1);
        }
        if(answer.size()<2){
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }
        int minimum=INT_MAX;
        for(int i=0;i<answer.size()-1;i++){
            if(minimum>answer[i+1]-answer[i]){
                minimum=answer[i+1]-answer[i];
                if(i!=0){
                    result.pop_back();
                    result.pop_back();
                    result.push_back(answer[i]);
                    result.push_back(answer[i+1]);
                }
                else{
                    result.push_back(answer[i]);
                    result.push_back(answer[i+1]);
                }
            }
        }
        return result;
    }
};