class Solution {
public:
    string largestOddNumber(string num) {
        int len=0;
        for(int i=0;i<num.size();i++){
            if((int(num[i]) & 1 )!=0)
                len=i+1;
        }
        if(len==0)
          return "";
        return num.substr(0,len);
    }
};