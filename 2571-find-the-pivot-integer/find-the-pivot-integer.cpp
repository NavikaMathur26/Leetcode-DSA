class Solution {
public:
    int pivotInteger(int n) {
        int sum1=n;
        if(n==1)
           return 1;
        for(int i=1;i<n;i++){
            int x=n-i;
            sum1+=x;
            int sum2=(x)*(x+1)/2;
            if(sum1==sum2)
              return x;
        }
        return -1;
    }
};