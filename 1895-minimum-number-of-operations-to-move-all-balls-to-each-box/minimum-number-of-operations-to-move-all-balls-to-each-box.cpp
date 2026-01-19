class Solution {
public:
    vector<int> minOperations(string boxes) {
        int c=0;
        vector<int> freq={};
        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1'){
                c+=1;
                freq.push_back(i);
            }
              
        }
        vector<int> v(boxes.size(),0);
        for(int i=0;i<boxes.size();i++){
            for(int j=0;j<c;j++){
                  v[i]+=abs(freq[j]-i);
            }
        }
        return v;
    }
};