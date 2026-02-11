class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n,1);
        int prev=1,next=1;
        for(int i=0;i<n;i++){
            v[i]=prev;
            prev*=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            v[i]*=next;
            next*=nums[i];
        }
        return v;
    }
};