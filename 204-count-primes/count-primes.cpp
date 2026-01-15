class Solution {
public:
    int countPrimes(int n) {
       vector<bool> prime(n+1,1);
       int c=0;
       for(int i=2;i<n;i++){
        if(prime[i]==1){
            c++;
            for(int j=i*2;j<n;j+=i){
                if(prime[j]==1)
                  prime[j]=0;
            }
        }
       }
       return c;
    }
};