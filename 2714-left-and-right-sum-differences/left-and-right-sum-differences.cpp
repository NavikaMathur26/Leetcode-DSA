class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> ls(n,0);
        vector<int> rs(n,0);
        vector<int> ans(n);
        for(int i=1;i<n;i++){
            ls[i]=nums[i-1]+ls[i-1];//leftsum
            rs[n-(i+1)]=nums[n-i]+rs[n-i];//rightsum
        }
        for(int i=0;i<n;i++){
            ans[i]=abs(ls[i]-rs[i]);
        }
        return ans;
    }
};