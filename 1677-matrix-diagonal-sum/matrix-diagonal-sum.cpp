class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int j=n-1-i;
            sum+=(mat[i][j])+(mat[i][i]);
        }
        if(n%2!=0){
          int k=n/2;
          sum-=mat[k][k];
          return sum;}
        return sum;
    }
};