class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> before;
        vector<int> after;
        int counter=0;
        for(auto i: nums){
            if(i<pivot){
                before.push_back(i);
            }
            else if(i>pivot){
                after.push_back(i);
            }
            else{
                counter++;
            }
        }
        for(int i=0;i<counter;i++){
            before.push_back(pivot);
        }
        for(int i=0;i<after.size();i++){
            before.push_back(after[i]);
        }
        return before;
    }
};