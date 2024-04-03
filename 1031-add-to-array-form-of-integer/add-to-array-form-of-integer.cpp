class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int carry = 0;
        int i = num.size() - 1;
        while (i >= 0 || k > 0 || carry > 0) {
            int digit = carry;
            if (i >= 0) {
                digit += num[i];
                i--;
            }
            if (k > 0) {
                digit += k % 10;
                k /= 10;
            }
            ans.insert(ans.begin(), digit % 10);
            carry = digit / 10;
        }

        return ans;
    }
};