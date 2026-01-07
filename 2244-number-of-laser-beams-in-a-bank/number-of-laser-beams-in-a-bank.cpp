class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> v;
        for(int i=0;i<bank.size();i++){
            int curr=0;
            for(int j=0;j<bank[i].length();j++){
                if(bank[i][j]=='1')
                   curr++;
            }
            if(curr!=0)
               v.push_back(curr);
        }
        if(v.size()==0)
           return 0;
        int sum=0;
        for(int i=0;i<v.size()-1;i++){
            sum+=(v[i]*v[i+1]);
        }
        return sum;

    }
};