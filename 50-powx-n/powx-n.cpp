class Solution {
public:
    double myPow(double x, int n) {
        if(n==0 || x==1)
          return 1.00;
        if(n==-1)
          return double(1/x);
        if(x==-1 && (n&1)==0)
          return 1.0;
        if(x==-1 && (n&1)!=0)
          return -1.0;
        if(x==0 || n<=INT_MIN||n>INT_MAX)
         return 0.00;

        double pr=1;
        bool b=false;
        if(n<0){
            n=abs(n);
            b=true;
        }
        while(n!=1){
            if((n&1)==0){
                x*=x;
                n/=2;
            }
            else{
               pr*=x;
               n-=1;}
        }
        if(b==true)
          return (1/(pr*x));
        return pr*x;
    }
};