class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1s=0,counter=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                counter=0;
            }
            else
              counter++;
            max1s=max(max1s,counter);
        }
        return max1s;
    }
};