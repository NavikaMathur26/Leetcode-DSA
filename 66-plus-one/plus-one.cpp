class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int carry=0;
       for(int i=digits.size()-1;i>=0;i--){
         if(digits.at(i)!=9){
            digits[i]+=1;
            return digits;}
         else{
            digits.at(i)=0;
            carry+=1;
       }} 
       if(carry>=1)
          digits.insert(digits.begin(),1);
        return digits;
    }
};