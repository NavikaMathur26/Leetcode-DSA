class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.length();
        if(n<=k){
          reverse(s.begin(),s.end());
          return s;}
        int c=ceil(n/(2.0*k));
        for(int i=0;i<n;i+=2*k){
            if(s.begin()+i+k <= s.end())
             reverse(s.begin()+i,s.begin()+i+k);
            else if(s.begin()+i<=s.end())
             reverse(s.begin()+i,s.end());
            else
              break; 
        }
        return s;
    }
};