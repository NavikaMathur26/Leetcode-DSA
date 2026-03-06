class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
          int n=s.length();
          string str="";
          int ml=0, c=0;
          for(int i=0;i<n;i++){
            if(str.find(s[i])==string::npos){
                str+=s[i];
                c++;
                ml=max(ml,c);
            }
            else{
                str.erase(0,str.find(s[i])+1);
                str+=s[i];
                c=str.length();
            }
          }
          return ml;
    }
};