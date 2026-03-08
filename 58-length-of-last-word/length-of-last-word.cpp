class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int l=0,c=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                c++;
                l+=1;
            }
            if(l>=1){
                if(s[i]==' ')
                  break;
            }
        }
        return c;
    }
};