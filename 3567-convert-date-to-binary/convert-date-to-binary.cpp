class Solution {
public:
    string convertDateToBinary(string date) {
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,2));
        int taarikh=stoi(date.substr(8,2));
        string bin_year="";
        string bin_month="";
        string bin_date="";
        while(year!=0){
            int rem=year%2;
            if (rem==0) bin_year='0'+bin_year;
            else bin_year='1'+bin_year;
            year/=2;
        }
        while(month!=0){
            int rem=month%2;
            if (rem==0) bin_month='0'+bin_month;
            else bin_month='1'+bin_month;
            month/=2;
        }
        while(taarikh!=0){
            int rem=taarikh%2;
            if (rem==0) bin_date='0'+bin_date;
            else bin_date='1'+bin_date;
            taarikh/=2;
        }
        return (bin_year)+'-'+(bin_month)+'-'+(bin_date);
    }
};