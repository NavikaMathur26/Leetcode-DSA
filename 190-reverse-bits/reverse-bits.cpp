class Solution {
public:
    int reverseBits(int n) {
        int ans=0,i=31,rem;
        while(n>0){
            rem=n%2;
            if(rem==1)
               ans+=pow(2,i);
            n/=2;
            i--;
        }

        return ans;
    }
};