class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // METHOD 1

        // vector<int> answer;
        // sort(arr.begin(),arr.end());
        // for(int i=0;i<arr.size();i++){
        //     if(i==0 || arr[i]!=arr[i-1]) answer.push_back((count(arr.begin(),arr.end(),arr[i])));
        // }
        // set<int> checker(answer.begin(),answer.end());
        // vector<int> check(checker.begin(),checker.end());
        // return (answer.size()==check.size());

        //METHOD 2
        int hash[2001]={0};
        for(int i=0;i<arr.size();i++){
            hash[arr[i]+1000]++;
        }
        int checkhash[1001]={0};
        for(int i=0;i<2001;i++){
            checkhash[hash[i]]++;
        }
        for(int i=1;i<1001;i++){
            if(checkhash[i]>1) return false;
        }
        return true;
    }
};