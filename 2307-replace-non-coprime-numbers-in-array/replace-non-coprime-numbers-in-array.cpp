class Solution {
public:
    // int gcd(int a,int b){
    //     // if(b==1) return 1;
    //     // int temp=a%b;
    //     // if(temp==0) return b;
    //     // return gcd(b,temp)
    //     return b == 0 ? a : gcd(b, a % b);
    // }
    // long long lcm(long long a, long long b) {
    //     return (a / gcd(a, b)) * b;
    // }
    // vector<int> replaceNonCoprimes(vector<int>& nums) {
    //     // bool next=true;
    //     // do{
    //     //     for(int i=0;i<nums.size()-1;i++){
    //     //         int value=gcd(nums[i],nums[i+1]);
    //     //         if(value!=1){
    //     //             int number=lcm(nums[i],nums[i+1]);
    //     //             nums.erase(nums.begin()+i,nums.begin()+i+2);
    //     //             nums.insert(nums.begin()+i,number);
    //     //         }
    //     //     }
    //     //     int counter=0;
    //     //     for(int i=0;i<nums.size()-1;i++){
    //     //         if(gcd(nums[i],nums[i+1])>1){
    //     //             counter++;
    //     //             break;
    //     //         }
    //     //     }
    //     //     if(counter==0) next=false;
    //     // } while(next);
    //     // return nums;

    //     stack<int> st;
    //     vector<int> answer;
    //     for(auto i:nums){
    //         st.push(i);
    //     }
    //     while(!st.empty()){
    //         int n1=st.top();
    //         st.pop();
    //         if(st.empty()){
    //             answer.push_back(n1);
    //             break;
    //         }
    //         int n2=st.top();
    //         if(gcd(n1,n2)!=1){
    //             int value=lcm(n1,n2);
    //             st.pop();
    //             st.push(value);
    //         }
    //         else{
    //             answer.push_back(n1);
    //         }
    //     }
    //     reverse(answer.begin(),answer.end());
    //     return answer;

    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    long long lcm(long long a, long long b) {
        return (a / gcd(a, b)) * b;
    }

    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<long long> st;
        for (int num : nums) {
            st.push_back(num);
            // Keep merging as long as last two are not coprime
            while (st.size() > 1) {
                long long a = st.back(); st.pop_back();
                long long b = st.back(); st.pop_back();
                long long g = gcd(a, b);
                if (g > 1) {
                    st.push_back(lcm(a, b));  // merge into LCM
                } else {
                    st.push_back(b);
                    st.push_back(a);
                    break;
                }
            }
        }
        // Convert back to int
        return vector<int>(st.begin(), st.end());
    }
};