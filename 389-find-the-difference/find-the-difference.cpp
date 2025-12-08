class Solution {
public:
    char findTheDifference(string s, string t) {
        int ssum=0,tsum=0;
        for(int i=0;i<s.length();i++){
            ssum+=s[i];
        }
        for(int i=0;i<t.length();i++){
            tsum+=t[i];
        }
        return char(tsum-ssum);
    }
};