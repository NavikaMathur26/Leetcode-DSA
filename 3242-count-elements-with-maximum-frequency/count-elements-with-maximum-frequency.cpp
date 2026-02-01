class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxfreq=INT_MIN;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            maxfreq=max(maxfreq,mp[nums[i]]);
        }
        int sum=0;
        unordered_map<int,int>:: iterator it=mp.begin();
        while(it!=mp.end()){
            if(it->second==maxfreq)
               sum+=it->second;
            it++;
        }
        return sum;
    }
};