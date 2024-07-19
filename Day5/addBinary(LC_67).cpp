class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i=a.length()-1;
        int j=b.length()-1;
        int remainder=0;
        while(i>=0&& j>=0){
            int one=a[i]-'0';
            int two=b[j]-'0';
            int sum=one+two+remainder;
             if(sum==2){
                sum=0;
                remainder=1;
            }
            else if(sum==3){
                sum=1;
                remainder=1;
            }
            else remainder=0;
            ans+=sum+'0';
            i--;
            j--;
        }
        while(i>=0){
            int sum=(a[i]-'0')+remainder;
             if(sum==2){
                sum=0;
                remainder=1;
            }
            else if(sum==3){
                sum=1;
                remainder=1;
            }
            else remainder=0;
            ans+=sum+'0';
            i--;
        }
        while(j>=0){
            int sum=(b[j]-'0')+remainder;
            if(sum==2){
                sum=0;
                remainder=1;
            }
            else if(sum==3){
                sum=1;
                remainder=1;
            }
            else remainder=0;
            ans+=sum+'0';
            j--;
        }
        if(remainder>0){
            ans+=1+'0';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
