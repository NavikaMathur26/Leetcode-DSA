class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxnum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            maxnum=max(maxnum,nums[i]);
        }
        for(int i=1;i<=maxnum;i++){
            if(mp[i]==0)
              return i;
        }
        if(maxnum<=0)
            return 1;
        return maxnum+1;
    }
};