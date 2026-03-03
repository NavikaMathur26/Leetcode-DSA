class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string str="";
        int c=0;
        for(int i=n-1;i>=0;i--){
           if(s[i]==' '){
             if(c>0){
                str.append(s.substr(i+1,c));
                str+=' ';}
             c=0;}
           else
              c++;
        }
        str.append(s.substr(0,c));
        if(!str.empty() && str[str.length()-1]==' '){
            str.erase(str.length()-1,1);
        }
        return str;
    }
};