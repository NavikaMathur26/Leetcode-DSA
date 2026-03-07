class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int idx=0;
        for(int i=0;i<n;i++){
            char ch=chars[i];
            int c=0;
            while(i<n && ch==chars[i]){
                c++;
                i++;
            }
            if(c==1)
              chars[idx++]=ch;
            else{
              chars[idx++]=ch;
              string s=to_string(c);
              for(auto x:s){
                chars[idx++]=x;
              }
            }
            i--;
        }
        chars.resize(idx);
        return idx;
    }
};