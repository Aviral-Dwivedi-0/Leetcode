class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        //SOLUTION 1

        // int n=derived.size();
        // vector<int> original(n,0);
        // original[0]=0;
        // for(int i=0;i<derived.size();i++){
        //     if(i!=n-1)
        //     original[i+1]=derived[i]^original[i];
        //     else 
        //     original[0]=derived[n-1]^original[n-1];
        // }
        // if (original[0]==0) return true;


        // original[0]=1;
        // for(int i=0;i<derived.size();i++){
        //     if(i!=n-1)
        //     original[i+1]=derived[i]^original[i];
        //     else 
        //     original[0]=derived[n-1]^original[n-1];
        // }
        // if (original[0]==1) return true;
        // return false;

        //SOLUTION 2
        int sum=0;
        for(auto i:derived){
            sum+=i;
        }
        return (sum%2==0);
    }
};