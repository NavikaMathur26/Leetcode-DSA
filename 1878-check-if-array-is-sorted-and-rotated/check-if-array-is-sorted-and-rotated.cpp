class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> A;
        A=nums;
        sort(A.begin(),A.end());
        for(int i=0;i<nums.size();i++){
            if(A==nums)
               return true;
            else{
                A.push_back(A[0]);
                A.erase(A.begin());
            }
        }
        return false;
    }
};