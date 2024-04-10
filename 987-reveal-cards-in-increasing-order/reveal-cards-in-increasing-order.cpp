class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        vector<int> answer;
        int n=deck.size();
        for(int i=n-1;i>=0;i--){
            if(i==n-1) answer.push_back(deck[i]);
            else{
            answer.insert(answer.begin()+0,deck[i]);
            int num=answer[answer.size()-1];
            answer.erase(answer.begin()+answer.size()-1,answer.end());
            answer.insert(answer.begin()+1,num);
            }            
        }
        return answer;
    }
};