class Solution {
public:
    int hammingDistance(int x, int y) {
        int num= (x^y);
        int c=0;
        while(num>0){
            if(num%2==1)
              c+=1;
            num/=2;
        }
        return c;
    }
};