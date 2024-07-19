class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i=s.length()-1,j=s.length()-1;
        string temp="";
        while(j>=0 && i>=0){
            if(s[i]==' '){
                i--;
                j=i;
            }
            else if(j-1>=0 && s[j-1]!=' '){ 
                temp+=s[j--];    
            }
            else if(j-1<0){
                temp+=s[j--];
                reverse(temp.begin(),temp.end());
                ans+=temp;
                break;
            }
            else if(s[i]!=' ' && s[j]!=' '){
                temp+=s[j];
                reverse(temp.begin(),temp.end());
                ans+=temp;
                ans+=" ";
                temp="";
                i=j-1;
                j--;
            }
        }
        if(ans[ans.length()-1]==' ') ans.pop_back();
        return ans;
    }
};
