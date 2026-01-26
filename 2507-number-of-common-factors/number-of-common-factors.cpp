class Solution {
public:
    int commonFactors(int a, int b) {
        vector<int> v;
        int n=min(a,b);
        for(int i=1;i<=n;i++){
            if(n%i==0)
              v.push_back(i);
        }
        int m=max(a,b);
        int count=0;
        for(int i=0;i<v.size();i++){
            if(m%v[i]==0)
              count++;
        }
        return count;
    }
};