class Solution {
public:
    double average(vector<int>& salary) {
        double si=salary.size();
        int sum=0;
        for(int i=0;i<si;i++){
            sum+=salary[i];
        }
        return (sum-(*max_element(salary.begin(),salary.end()))-(*min_element(salary.begin(),salary.end())))/(si-2);
    }
};