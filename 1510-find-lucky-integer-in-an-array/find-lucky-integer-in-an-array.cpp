class Solution {
public:
    int findLucky(vector<int>& arr) {
        int hash[501]={0};
        for(int i=0;i<arr.size();i++){
            hash[arr[i]]++;
        }
        for(int i=500;i>=1;i--){
            if(i==hash[i]) return i;
        }
        return -1;
    }
};