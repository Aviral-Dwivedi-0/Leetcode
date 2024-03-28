class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> answer;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(i==0 || arr[i]!=arr[i-1]) answer.push_back((count(arr.begin(),arr.end(),arr[i])));
        }
        set<int> checker(answer.begin(),answer.end());
        vector<int> check(checker.begin(),checker.end());
        return (answer.size()==check.size());
    }
};