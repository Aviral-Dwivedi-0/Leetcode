class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        //METHOD 1

        // vector<int> before;
        // vector<int> after;
        // int counter=0;
        // for(auto i: nums){
        //     if(i<pivot){
        //         before.push_back(i);
        //     }
        //     else if(i>pivot){
        //         after.push_back(i);
        //     }
        //     else{
        //         counter++;
        //     }
        // }
        // for(int i=0;i<counter;i++){
        //     before.push_back(pivot);
        // }
        // for(int i=0;i<after.size();i++){
        //     before.push_back(after[i]);
        // }
        // return before;

        //METHOD 2
        int n=nums.size();
        vector<int> answer(n,0);
        int left=0;
        int right=n-1;
        for(auto i:nums){
            if(i<pivot){
                answer[left]=i;
                left++;
            }
            else if(i>pivot){
                answer[right]=i;
                right--;
            }
        }
        reverse(answer.begin()+right+1,answer.end());
        while(left<=right){
            answer[left]=pivot;
            left++;
        }
        return answer;
    }
};