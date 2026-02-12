class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixsum(n,0);
        prefixsum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixsum[i]=prefixsum[i-1]+nums[i];
        }
 
        int ls=0,rs=0;
        for(int i=0;i<n;i++){
            ls=prefixsum[i]-nums[i];
            rs=prefixsum[n-1]-prefixsum[i];
            if(ls==rs)
              return i;
        }
        return -1;
    }
};