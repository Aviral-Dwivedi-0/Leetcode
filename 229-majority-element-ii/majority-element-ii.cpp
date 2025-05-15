class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int counter1=0;
        int counter2=0;
        int num1=0;
        int num2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(counter1==0 && nums[i]!=num2){
                counter1++;
                num1=nums[i];
            }
            else if(counter2==0 && nums[i]!=num1){
                counter2++;
                num2=nums[i];
            }
            else if(nums[i]==num1){
                counter1++;
            }
            else if(nums[i]==num2){
                counter2++;
            }
            else{
                counter1--;
                counter2--;
            }
        }
        cout<<num1<<endl<<num2<<endl;
        vector<int> answer;
        counter1=0;
        counter2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==num1) counter1++;
            else if(nums[i]==num2) counter2++;
        }
        int minimum=(int)(n/3)+1;
        if(counter1>=minimum) answer.push_back(num1);
        if(counter2>=minimum) answer.push_back(num2);
        return answer;
    }
};