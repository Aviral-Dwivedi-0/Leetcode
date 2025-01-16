class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // set<char> s1;
        // set<char> s2;
        // int l1=str1.size();
        // int l2=str2.size();
        // int mini=min(l1,l2);
        // int maxi=max(l1,l2);
        // if(l1>l2){
        //     for(int i=0;i<mini;i++){
        //         s2.insert(str2[i]);
        //     }
        //     for(int i=0;i<maxi;i++){
        //         s1.insert(str1[i]);
        //     }
        // }
        // else{
        //     for(int i=0;i<maxi;i++){
        //         s2.insert(str2[i]);
        //     }
        //     for(int i=0;i<mini;i++){
        //         s1.insert(str1[i]);
        //     }
        // }
        // for(auto i:s1){
        //     if(s2.find(i)==s2.end()) return "";
        // }
        // // string req="";
        // // int large=max(str1.size(),str2.size());
        // // int small=min(str1.size(),str2.size());
        // // while(small>0){
        // //     int temp=large%small;
        // //     large=small;
        // //     small=temp;
        // // }
        // // int index=0;
        // // while(index<large && str1[index]==str2[index]){
        // //     req+=str1[index];
        // //     index++;
        // // }
        // // return req;
        

        
        // int i=0;
        // for(i=0;i<mini;i++){
        //     if(str1[i]!=str2[i]){
        //         break;
        //     }
        //     if(maxi%mini!=0 && i>(mini/2)) {
        //         i--;
        //         break;
        //     }
        // }
        // string answer=str2.substr(0,i);
        // return answer;
        if(str1+str2 != str2+str1) return "";
        int gcdLength=gcd(str1.size(),str2.size());
        return str1.substr(0,gcdLength);
    }
};