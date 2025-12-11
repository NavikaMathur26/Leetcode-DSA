class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
              c++;
        }
        while(c>0){
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]==0)
                  swap(nums[i],nums[i+1]);
            }
            c--;
        }
    }
};