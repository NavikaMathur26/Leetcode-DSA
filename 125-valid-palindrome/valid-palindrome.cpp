class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string str="";
        for(int i=0;i<n;i++){
            if(int(s[i])>=65 && int(s[i])<=90){
                str+=char(int(s[i])+32);
            }
            if(int(s[i])>=97 && int(s[i])<=122)
                str+=s[i];
            if(s[i]>='0' && s[i]<='9')
                str+=s[i];
        }
        int newn=str.length();
        for(int i=0;i<(newn/2);i++){
            if(str[i]!=str[newn-(i+1)]){
                  return false;
            }
        }
        return true;
    }
};