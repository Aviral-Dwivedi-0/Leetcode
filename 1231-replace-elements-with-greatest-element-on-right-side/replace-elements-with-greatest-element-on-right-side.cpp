class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if (i==arr.size()-1) {
                arr[i]=-1;
            }
            else
            arr[i]=*max_element(arr.begin()+i+1,arr.end());
        }
        return arr;
    }
};