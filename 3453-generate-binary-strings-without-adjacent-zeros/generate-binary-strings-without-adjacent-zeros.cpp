class Solution {
public:
    vector<string> validStrings(int n) {
        if (n == 0) return {};
        if (n == 1) return {"0", "1"};

        vector<string> prev = validStrings(n - 1);
        vector<string> result;

        for (string s : prev) {
            if (s.back() == '1') {
                result.push_back(s + '0');
                result.push_back(s + '1');
            } else {  
                result.push_back(s + '1'); 
            }
        }

        return result;
    }
};