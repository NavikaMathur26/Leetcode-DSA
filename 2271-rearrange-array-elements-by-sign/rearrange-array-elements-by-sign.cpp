class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> nnum(n/2,0);
        vector<int> pnum(n/2,0);
        int j=0,k=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
              nnum[j]=nums[i]; j++;}
            else{
              pnum[k]=nums[i]; k++;}
        }
        int l=0,m=0;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            if((i&1)==0){
              v[i]=pnum[l]; l++;}
            else{
              v[i]=nnum[m]; m++;
            }
        }
        return v;
    }
};