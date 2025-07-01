class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> s(wordList.begin(),wordList.end());
        int l=wordList[0].size();
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        s.erase(beginWord);
        while(!q.empty()){
            string start=q.front().first;
            int step=q.front().second;
            q.pop();
            if(start==endWord) return step;
            for(int i=0;i<start.size();i++){
                char original = start[i];
                for(char ch='a';ch<='z';ch++){
                    start[i]=ch;
                    if(s.find(start)!=s.end()){
                        q.push({start,step+1});
                        s.erase(start);
                    }
                }
                start[i]=original;
                
            }
        }
        return 0;
    }
};