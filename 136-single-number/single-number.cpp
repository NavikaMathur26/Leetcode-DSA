class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.push_back(0);
        int n;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1])
                i+=1;
            else{
               n=nums[i];
               break;}
        }
        return n;
    }
};