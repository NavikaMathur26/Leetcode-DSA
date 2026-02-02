class Solution {
public:
    int maxDistinct(string s) {
        int hash[26]={0};
        int count=0;
        for(int i=0;i<s.length();i++){
            if(hash[s[i]-'a']!=0){
                continue;
            }
            else{
                hash[s[i]-'a']=1;
                count++;
            }
        }
        return count;
    }
};