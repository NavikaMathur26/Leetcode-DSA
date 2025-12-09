class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v;
        int pt=nums[0];
        v.push_back(pt);
        for(int i=1;i<nums.size();i++){
            if(pt==nums[i])
                continue;
            else{
                pt=nums[i];
                v.push_back(pt);
            }
        }
        nums=v;
        return v.size();
    }
};